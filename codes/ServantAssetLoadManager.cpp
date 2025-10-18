void ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w1
  struct ServantAssetLoadManager_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C421BC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C421BC = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->unloadIgnoredAssetArgs, (int32_t)v1, v3, v4);
  v5 = StringLiteral_1/*""*/;
  v6 = ServantAssetLoadManager_TypeInfo->static_fields;
  v6->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->wkSpace, v5, v7, v8);
}


void ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_Dictionary_object__object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C421BB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__Object__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
    byte_4C421BB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadedList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadlist, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.downloadlist, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.ActorVoice, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.LastActorVoice, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgAssetDataList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nobleEffectList, (int32_t)v21, v22, v23);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__Object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._releaseAssets, (int32_t)v24, v25, v26);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_4C421AA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4C421AA = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    sub_1C372B4(0);
  return System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           (Il2CppObject *)path,
           (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
}


void ServantAssetLoadManager__DebugPrint(ServantAssetLoadManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  if ( !data || (this = (ServantAssetLoadManager_o *)AssetData__GetObjectNameList(data, 0)) == 0 )
    sub_1C372B4(this);
}


void ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42140 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C42140 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__PreloadAssetsByArgs(args, 1, v2);
}


void ServantAssetLoadManager__DownloadSkillCutInLocal(
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
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
                                        skillInfo,
                                        skillInfo->klass->vtable._9_getCutInId.method,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__setLoadList(this, SkillCutInPath, 1, v7);
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
  ServantAssetLoadManager_c *v4; // x0
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  ServantAssetArgs_o *currentValue; // x19
  int32_t v8; // w24
  ServantAssetLoadManager_c *v9; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C421A9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
    byte_4C421A9 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(Instance[1].fields._syncRoot) = 3;
  v4 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v4 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v4->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          Instance,
                                                                          (const MethodInfo_3463460 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3AE40A8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v11,
           (const MethodInfo_3560E04 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v5 )
      break;
    currentValue = (ServantAssetArgs_o *)v11.fields._currentValue;
    if ( !v11.fields._currentValue )
      sub_1C372B4(v5);
    if ( SHIDWORD(v11.fields._currentValue[6].klass) >= 1 )
    {
      v8 = 0;
      do
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v6);
        ++v8;
      }
      while ( v8 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_3560E00 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v9 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v9 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v9->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_22:
    sub_1C372B4(Instance);
  System_Collections_Generic_Dictionary_object__object___Clear(
    Instance,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
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

  if ( (byte_4C42159 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C37058(&AssetManager_TypeInfo);
    byte_4C42159 = 1;
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
  const MethodInfo *v10; // x5

  if ( (byte_4C4218A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4218A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__ExistsBattleVoiceLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           type,
           v10);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int32_t v20; // w9
  Il2CppObject *v21; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v23; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  int32_t v28; // [xsp+8h] [xbp-68h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C4218B & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&Voice_TypeInfo);
    sub_1C37058(&StringLiteral_25063/*"{0:D0}_{1}"*/);
    sub_1C37058(&StringLiteral_12761/*"Servants_"*/);
    byte_4C4218B = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v12);
  if ( overwriteSvtVoiceId )
    v20 = overwriteSvtVoiceId;
  else
    v20 = VoiceId;
  v28 = VoicePrefix;
  v29 = v20;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v14, v15, v16, v17, v18, v19);
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0);
  v23 = System_String__Format_63602948((System_String_o *)StringLiteral_25063/*"{0:D0}_{1}"*/, v21, FileName, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v25 = System_Int32__ToString((int32_t)&v29, 0);
  v26 = System_String__Concat_63561656((System_String_o *)StringLiteral_12761/*"Servants_"*/, v25, 0);
  if ( !Instance )
    sub_1C372B4(v26);
  return SoundManager__IsExistsSound((SoundManager_o *)Instance, v26, v23, 0);
}


System_Collections_IEnumerator_o *ServantAssetLoadManager__GetAheadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C42195 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager__GetAheadBg_d__159_TypeInfo);
    byte_4C42195 = 1;
  }
  v7 = sub_1C372A4(ServantAssetLoadManager__GetAheadBg_d__159_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)bgList, v10, v11);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *ServantAssetLoadManager__GetCommandCodeFolderName(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C421A7 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_4587/*"CommandCodes/Texture/"*/);
    byte_4C421A7 = 1;
  }
  v11 = commandCodeId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_4587/*"CommandCodes/Texture/"*/, v9, 0);
}


System_String_o *ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4218E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4218E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal((ServantAssetLoadManager_o *)Instance, uniqueId, v4);
}


System_String_o *ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v7; // x0

  if ( (byte_4C4218F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C4218F = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                  (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_10:
    sub_1C372B4(LastActorVoice);
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
  if ( (byte_4C42123 & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    byte_4C42123 = 1;
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
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C421AB & 1) == 0 )
  {
    sub_1C37058(&System_IO_Path_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C42187 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_25063/*"{0:D0}_{1}"*/);
    byte_4C42187 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix, v9, v10, v11, v12, v13, v14);
  return System_String__Format_63602948((System_String_o *)StringLiteral_25063/*"{0:D0}_{1}"*/, v15, (Il2CppObject *)voiceId, 0);
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

  if ( (byte_4C42157 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C42157 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( appearanceId < 1 )
  {
    v10 = svtId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_40690640(v10, *(const MethodInfo **)&svtId);
  }
  else
  {
    v10 = appearanceId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_40690640(v10, *(const MethodInfo **)&svtId);
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
  const MethodInfo *v8; // x3
  System_Object_array *ComponentsInChildren_object__51641852; // x0
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v11; // x19

  if ( (byte_4C42162 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleServantDeadComponent_getReplaceChocoShader__);
    sub_1C37058(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__99_0__);
    sub_1C37058(&ServantAssetLoadManager___c_TypeInfo);
    byte_4C42162 = 1;
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
    _9__99_0 = (System_Func_T1__T2__TResult__o *)sub_1C372A4(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__99_0,
      v5,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__99_0__,
      0);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__99_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__99_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__99_0, (int32_t)_9__99_0, v7, v8);
  }
  if ( !obj )
    sub_1C372B4(v3);
  ComponentsInChildren_object__51641852 = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                            obj,
                                            (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__51641852 && (max_length = ComponentsInChildren_object__51641852->max_length) != 0 )
  {
    if ( !(_DWORD)max_length )
      sub_1C372BC(ComponentsInChildren_object__51641852);
    v11 = ComponentsInChildren_object__51641852->m_Items[0];
  }
  else
  {
    v11 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
  {
    _9__99_0 = (System_Func_T1__T2__TResult__o *)sub_1C372A4(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__99_0,
      v11,
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
  const MethodInfo *v8; // x3
  System_Object_array *ComponentsInChildren_object__51641852; // x0
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v11; // x19

  if ( (byte_4C42161 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleServantDeadComponent_getReplaceDeadShader__);
    sub_1C37058(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__98_0__);
    sub_1C37058(&ServantAssetLoadManager___c_TypeInfo);
    byte_4C42161 = 1;
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
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1C372A4(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v5,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__98_0__,
      0);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__98_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__98_0, (int32_t)_9__98_0, v7, v8);
  }
  if ( !obj )
    sub_1C372B4(v3);
  ComponentsInChildren_object__51641852 = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                            obj,
                                            (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__51641852 && (max_length = ComponentsInChildren_object__51641852->max_length) != 0 )
  {
    if ( !(_DWORD)max_length )
      sub_1C372BC(ComponentsInChildren_object__51641852);
    v11 = ComponentsInChildren_object__51641852->m_Items[0];
  }
  else
  {
    v11 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
  {
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1C372A4(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v11,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      0);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__98_0;
}


bool ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  v2 = data;
  if ( (byte_4C42145 & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C42145 = 1;
  }
  if ( !v2 )
    sub_1C372B4(data);
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
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v5; // x19
  intptr_t m_CachedPtr; // x8

  if ( (byte_4C421A8 & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&StringLiteral_6423/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/);
    byte_4C421A8 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6423/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0) > 0 )
    return 0;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  klass = Instance[2].klass;
  if ( klass
    && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
        *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment) )
  {
    if ( *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
      v5 = (UnityEngine_Object_o *)Instance[2].klass;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v5 || (m_CachedPtr = v5[2].fields.m_CachedPtr) == 0 )
LABEL_21:
    sub_1C372B4(Instance);
  return *(_BYTE *)(m_CachedPtr + 736);
}


bool ServantAssetLoadManager__IsPreloadedBattleActor(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_4C42158 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C37058(&AssetManager_TypeInfo);
    byte_4C42158 = 1;
  }
  if ( !args )
    sub_1C372B4(this);
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

  if ( (byte_4C42192 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42192 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)Instance[5].klass;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)Instance,
         uniqueId,
         (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)Instance[5].klass;
      if ( Instance )
      {
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                     uniqueId,
                     (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance[2].monitor) != 0;
      }
    }
LABEL_11:
    sub_1C372B4(Instance);
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
  const MethodInfo *v8; // x4

  if ( (byte_4C421B5 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__LoadBattleActorDropEffectDictLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v8);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *ServantAssetLoadManager__LoadBattleActorDropEffectDictLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_40690640; // x0
  System_String_o *v10; // x21
  Il2CppObject *AssetObject_object; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x20
  __int64 v13; // x0
  Il2CppObject *v14; // x19

  if ( (byte_4C421B6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_5381/*"DropJumpingOverwriteData"*/);
    sub_1C37058(&StringLiteral_5379/*"DropHighPositionOverwriteData"*/);
    byte_4C421B6 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName_40690640(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  v10 = ActorFolderName_40690640;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         ActorFolderName_40690640,
                         (System_String_o *)StringLiteral_5379/*"DropHighPositionOverwriteData"*/,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
  {
    v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
      v12,
      (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__);
    if ( !v12 )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_Int32Enum__object___Add(
      v12,
      2,
      AssetObject_object,
      (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
  }
  v14 = ServantAssetLoadManager__getAssetObject_object_(
          this,
          v10,
          (System_String_o *)StringLiteral_5381/*"DropJumpingOverwriteData"*/,
          (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0) )
  {
    if ( v12
      || (v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo),
          System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
            v12,
            (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__),
          v12) )
    {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add(
        v12,
        1,
        v14,
        (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
      return (System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *)v12;
    }
LABEL_20:
    sub_1C372B4(v13);
  }
  return (System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *)v12;
}


BattleDropPointAdjustSetting_o *ServantAssetLoadManager__LoadBattleDropPointAdjustSetting(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4C421B7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__LoadBattleDropPointAdjustSettingLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v8);
}


// local variable allocation has failed, the output may be wrong!
BattleDropPointAdjustSetting_o *ServantAssetLoadManager__LoadBattleDropPointAdjustSettingLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_40690640; // x0

  if ( (byte_4C421B8 & 1) == 0 )
  {
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_BattleDropPointAdjustSetting___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_5382/*"DropPointAdjustData"*/);
    byte_4C421B8 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName_40690640(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  return (BattleDropPointAdjustSetting_o *)ServantAssetLoadManager__getAssetObject_object_(
                                             this,
                                             ActorFolderName_40690640,
                                             (System_String_o *)StringLiteral_5382/*"DropPointAdjustData"*/,
                                             (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_BattleDropPointAdjustSetting___);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadBattlePointGauge(
        int32_t battlePointId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C421B1 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__LoadBattlePointGaugeLocal(
           (ServantAssetLoadManager_o *)Instance,
           battlePointId,
           parent,
           v6);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadBattlePointGaugeLocal(
        ServantAssetLoadManager_o *this,
        int32_t battlePointId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_String_o *GaugeAssetPath; // x0
  Il2CppObject *AssetObject_object; // x20

  if ( (byte_4C421B2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C37058(&StringLiteral_3124/*"BattlePointGauge"*/);
    byte_4C421B2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  if ( BattlePointMaster__IsHideGaugeAllTime((BattlePointMaster_o *)Master_object, battlePointId, 0) )
    return 0;
  GaugeAssetPath = BattlePointMaster__GetGaugeAssetPath(battlePointId, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         GaugeAssetPath,
                         (System_String_o *)StringLiteral_3124/*"BattlePointGauge"*/,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51855596(
                                       AssetObject_object,
                                       parent,
                                       (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
}


BattleServantParamSetting_o *ServantAssetLoadManager__LoadBattleServantParamSetting(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4C421B9 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__LoadBattleServantParamSettingLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v8);
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamSetting_o *ServantAssetLoadManager__LoadBattleServantParamSettingLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_40690640; // x0

  if ( (byte_4C421BA & 1) == 0 )
  {
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_BattleServantParamSetting___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_3129/*"BattleServantParamSettingData"*/);
    byte_4C421BA = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName_40690640(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  return (BattleServantParamSetting_o *)ServantAssetLoadManager__getAssetObject_object_(
                                          this,
                                          ActorFolderName_40690640,
                                          (System_String_o *)StringLiteral_3129/*"BattleServantParamSettingData"*/,
                                          (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_BattleServantParamSetting___);
}


void ServantAssetLoadManager__LoadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *AheadBg; // x1

  AheadBg = ServantAssetLoadManager__GetAheadBg(this, bgList, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0);
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
  int32_t v14; // w3
  int32_t v15; // w6
  UnityEngine_MonoBehaviour_o *v16; // x24
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_4C42193 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42193 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  v16 = (UnityEngine_MonoBehaviour_o *)Instance;
  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          (ServantAssetLoadManager_o *)Instance,
                                          parent,
                                          svtId,
                                          v14,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          v15,
                                          callback,
                                          v18);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324(v16, Manager__loadNoblePhantasmCoroutine, 0);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4C42168 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42168 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           treasureDeviceId,
           limit,
           name,
           v8);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
        ServantAssetLoadManager_o *this,
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *ExecutingTdInfo; // x0
  int32_t RandomSeqIdEachLimit; // w0
  System_String_o *v11; // x0
  System_String_o *v12; // x21
  System_String_o *v13; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  int32_t groupSeqId; // [xsp+18h] [xbp-38h] BYREF
  int32_t MasterKind_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C42169 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BattleSequenceManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C37058(&StringLiteral_9515/*"NoblePhantasm/"*/);
    byte_4C42169 = 1;
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
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !ExecutingTdInfo )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          ExecutingTdInfo,
          &entity,
          treasureDeviceId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
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
    sub_1C372B4(ExecutingTdInfo);
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
  v11 = System_Int32__ToString((int32_t)&MasterKind_k__BackingField, 0);
  v12 = System_String__Concat_63561656((System_String_o *)StringLiteral_9515/*"NoblePhantasm/"*/, v11, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v12, 0) )
  {
    groupSeqId = 10 * (MasterKind_k__BackingField / 10);
    v13 = System_Int32__ToString((int32_t)&groupSeqId, 0);
    v12 = System_String__Concat_63561656((System_String_o *)StringLiteral_9515/*"NoblePhantasm/"*/, v13, 0);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v12,
                                       name,
                                       (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void ServantAssetLoadManager__PreloadAssetsByArgs(ServantAssetArgs_o *args, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x21
  int32_t v15; // w22
  int32_t BattlePointId_k__BackingField; // w20

  if ( (byte_4C4213F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C4213F = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
LABEL_26:
    sub_1C372B4(Item);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v6);
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
      v7);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v6);
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v12);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v15 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v15,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v15,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_26;
        ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Item->klass->vtable[10].methodPtr)(
          Item,
          dlOnly,
          Item->klass->vtable[10].method);
      }
      ++v15;
    }
    while ( v15 < skillList_k__BackingField->fields._size );
  }
  BattlePointId_k__BackingField = args->fields._BattlePointId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__PreloadBattlePointGauge(BattlePointId_k__BackingField, dlOnly, v13);
}


void ServantAssetLoadManager__PreloadBattlePointGauge(int32_t battlePointId, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_String_o *GaugeAssetPath; // x20
  const MethodInfo *v7; // x3

  if ( (byte_4C421B0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421B0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    goto LABEL_9;
  if ( BattlePointMaster__IsHideGaugeAllTime((BattlePointMaster_o *)Master_object, battlePointId, 0) )
    return;
  GaugeAssetPath = BattlePointMaster__GetGaugeAssetPath(battlePointId, 0);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
LABEL_9:
    sub_1C372B4(Master_object);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Master_object, GaugeAssetPath, dlOnly, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__PreloadShadowEffectLocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_String_o *effectPath; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4215E & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C4215E = 1;
  }
  effectPath = 0;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, (const MethodInfo *)dlOnly) )
    ServantAssetLoadManager__setLoadList(this, effectPath, dlOnly, v7);
}


bool ServantAssetLoadManager__SetNeedDownloadList(System_String_o *usmPath, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  bool IsExistAssetStorage; // w21
  const MethodInfo *v7; // x3

  if ( (byte_4C42171 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42171 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  IsExistAssetStorage = AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, usmPath, 0);
  if ( IsExistAssetStorage )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    if ( AssetManager__IsNeedDownload((AssetManager_o *)Instance, usmPath, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( Instance )
      {
        ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, usmPath, dlOnly, v7);
        return IsExistAssetStorage;
      }
LABEL_10:
      sub_1C372B4(Instance);
    }
  }
  return IsExistAssetStorage;
}


void ServantAssetLoadManager__ShowAssetNotFoundError(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ;
}


void ServantAssetLoadManager__StopVoice(int32_t uniqueId, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C42190 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42190 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__localStopVoice((ServantAssetLoadManager_o *)Instance, uniqueId, fadeoutTime, v6);
}


bool ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(
        ServantAssetArgs_o *args,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Master_object; // x0
  BattleDeckServantData_o *deckSvt_k__BackingField; // x8
  int32_t DisplayType_k__BackingField; // w20
  NpcServantDisplayTypeDetailMaster_o *v9; // x21
  char BattleCommonEffectPath; // w0
  int32_t effectId; // w20
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42160 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C42160 = 1;
  }
  entity = 0;
  *effectPath = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)effectPath, 0, (int32_t)method, v3);
  if ( !args || !args->fields._deckSvt_k__BackingField )
    goto LABEL_11;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
  deckSvt_k__BackingField = args->fields._deckSvt_k__BackingField;
  if ( !deckSvt_k__BackingField )
    goto LABEL_17;
  DisplayType_k__BackingField = args->fields._DisplayType_k__BackingField;
  v9 = (NpcServantDisplayTypeDetailMaster_o *)Master_object;
  Master_object = (Il2CppObject *)BattleDeckServantData__GetDisplayColorType(deckSvt_k__BackingField, 0);
  if ( !v9 )
    goto LABEL_17;
  NpcServantDisplayTypeDetailMaster__TryGetEntity(v9, &entity, DisplayType_k__BackingField, (int32_t)Master_object, 0);
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
    sub_1C372B4(Master_object);
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

  if ( (byte_4C42142 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42142 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
                (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
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
            (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
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
                                                    (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++*(&Instance->fields.soundCount + 1);
            return IsKeepAssetAvailable;
          }
        }
      }
    }
LABEL_20:
    sub_1C372B4(Instance);
  }
  return IsKeepAssetAvailable;
}


void ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C42197 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__);
    byte_4C42197 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
    (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v4.fields._current.fields.value, 0);
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x20
  int32_t v13; // w21
  int32_t BattlePointId_k__BackingField; // w19

  if ( (byte_4C42141 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C42141 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
LABEL_26:
    sub_1C372B4(Item);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v4);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v5);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v4);
  ServantAssetLoadManager__unloadFromDeckServant(args->fields._deckSvt_k__BackingField, v10);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v13 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v13,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v13,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_26;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[11].methodPtr)(
          Item,
          Item->klass->vtable[11].method);
      }
      ++v13;
    }
    while ( v13 < skillList_k__BackingField->fields._size );
  }
  BattlePointId_k__BackingField = args->fields._BattlePointId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__UnloadBattlePointGauge(BattlePointId_k__BackingField, v11);
}


void ServantAssetLoadManager__UnloadBattlePointGauge(int32_t battlePointId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C421B3 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__UnloadBattlePointGaugeLocal((ServantAssetLoadManager_o *)Instance, battlePointId, v4);
}


void ServantAssetLoadManager__UnloadBattlePointGaugeLocal(
        ServantAssetLoadManager_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_String_o *GaugeAssetPath; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C421B4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C421B4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  if ( !BattlePointMaster__IsHideGaugeAllTime((BattlePointMaster_o *)Master_object, battlePointId, 0) )
  {
    GaugeAssetPath = BattlePointMaster__GetGaugeAssetPath(battlePointId, 0);
    ServantAssetLoadManager__unloadTargetPathAssetLocal(this, GaugeAssetPath, v7);
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
  if ( (byte_4C421A6 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C421A6 = 1;
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
          sub_1C372BC(this);
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

  if ( (byte_4C4215F & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C4215F = 1;
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
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *bgAssetDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C421BD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4C421BD = 1;
  }
  bgAssetDataList = (System_Collections_Generic_List_object__o *)this->fields.bgAssetDataList;
  if ( !bgAssetDataList
    || (items = bgAssetDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++bgAssetDataList->fields._version,
        !items) )
  {
    sub_1C372B4(bgAssetDataList);
  }
  size = bgAssetDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgAssetDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    bgAssetDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)data;
    sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
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
  if ( (byte_4C42164 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_16169/*"_ClipSharpnessY"*/);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_21085/*"joint_all_Base"*/);
    sub_1C37058(&StringLiteral_16154/*"_ChocoTex"*/);
    sub_1C37058(&StringLiteral_24791/*"weapon"*/);
    sub_1C37058(&StringLiteral_12837/*"Shaders/ChocoMap"*/);
    sub_1C37058(&StringLiteral_16400/*"_Use_alphawidth"*/);
    sub_1C37058(&StringLiteral_4915/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/);
    sub_1C37058(&StringLiteral_17325/*"body"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C37058(&StringLiteral_16121/*"_AddColor"*/);
    byte_4C42164 = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                      v2,
                                      (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16173/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16173/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
  if ( !obj )
LABEL_53:
    sub_1C372B4(obj);
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16121/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
    if ( obj )
    {
      v49 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, 0);
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
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4915/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12837/*"Shaders/ChocoMap"*/,
             (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(v2, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_21085/*"joint_all_Base"*/, 0, 0);
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
      UnityEngine_Material__SetColor(v25, (System_String_o *)StringLiteral_16173/*"_Color"*/, v46, 0);
      v47.fields.a = a;
      v47.fields.r = v9;
      v47.fields.g = v8;
      v47.fields.b = v7;
      UnityEngine_Material__SetColor(v25, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, v47, 0);
      UnityEngine_Material__SetTexture(v25, (System_String_o *)StringLiteral_16154/*"_ChocoTex"*/, (UnityEngine_Texture_o *)object, 0);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17325/*"body"*/, 0) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_24791/*"weapon"*/, 0) )
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
          (System_String_o *)StringLiteral_16169/*"_ClipSharpnessY"*/,
          v36 - v42.fields.m_Extents.fields.y,
          0);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_71132888(
                                          v25,
                                          (System_String_o *)StringLiteral_16400/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v25, (System_String_o *)StringLiteral_16400/*"_Use_alphawidth"*/, 1.0, 0);
      v21 = (int)v22[1].klass;
      if ( (int)++v23 >= v21 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1C372BC(obj);
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
  if ( (byte_4C42165 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_16154/*"_ChocoTex"*/);
    sub_1C37058(&StringLiteral_4914/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_1C37058(&StringLiteral_12837/*"Shaders/ChocoMap"*/);
    sub_1C37058(&StringLiteral_16400/*"_Use_alphawidth"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C37058(&StringLiteral_16121/*"_AddColor"*/);
    byte_4C42165 = 1;
  }
  if ( !v2 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                      v2,
                                      (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16173/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0);
    if ( !obj )
      goto LABEL_44;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16173/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0);
  if ( !obj )
LABEL_44:
    sub_1C372B4(obj);
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16121/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0);
    if ( !obj )
      goto LABEL_44;
    v33 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, 0);
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
  v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4914/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12837/*"Shaders/ChocoMap"*/,
             (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(v2, v16);
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                      v2,
                                      (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
      UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16173/*"_Color"*/, v30, 0);
      v31.fields.r = v6;
      v31.fields.g = v9;
      v31.fields.b = v10;
      v31.fields.a = v11;
      UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, v31, 0);
      UnityEngine_Material__SetTexture(v28, (System_String_o *)StringLiteral_16154/*"_ChocoTex"*/, (UnityEngine_Texture_o *)object, 0);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_71132888(
                                          v28,
                                          (System_String_o *)StringLiteral_16400/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v28, (System_String_o *)StringLiteral_16400/*"_Use_alphawidth"*/, 1.0, 0);
      v24 = (int)v25[1].klass;
      if ( (int)++v26 >= v24 )
        goto LABEL_32;
    }
LABEL_45:
    sub_1C372BC(obj);
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
  if ( (byte_4C42163 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_16169/*"_ClipSharpnessY"*/);
    sub_1C37058(&StringLiteral_4913/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_21085/*"joint_all_Base"*/);
    sub_1C37058(&StringLiteral_24791/*"weapon"*/);
    sub_1C37058(&StringLiteral_16400/*"_Use_alphawidth"*/);
    sub_1C37058(&StringLiteral_17325/*"body"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C37058(&StringLiteral_16121/*"_AddColor"*/);
    byte_4C42163 = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                      v2,
                                      (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16173/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16173/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
  if ( !obj )
LABEL_53:
    sub_1C372B4(obj);
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16121/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
    if ( obj )
    {
      v48 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, 0);
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
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4913/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0);
  transform = UnityEngine_GameObject__get_transform(v2, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_21085/*"joint_all_Base"*/, 0, 0);
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
      UnityEngine_Material__SetColor(v24, (System_String_o *)StringLiteral_16173/*"_Color"*/, v45, 0);
      v46.fields.a = a;
      v46.fields.r = v9;
      v46.fields.g = v8;
      v46.fields.b = v7;
      UnityEngine_Material__SetColor(v24, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, v46, 0);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17325/*"body"*/, 0) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_24791/*"weapon"*/, 0) )
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
          (System_String_o *)StringLiteral_16169/*"_ClipSharpnessY"*/,
          v35 - v41.fields.m_Extents.fields.y,
          0);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_71132888(
                                          v24,
                                          (System_String_o *)StringLiteral_16400/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v24, (System_String_o *)StringLiteral_16400/*"_Use_alphawidth"*/, 1.0, 0);
      v20 = (int)v21[1].klass;
      if ( (int)++v22 >= v20 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1C372BC(obj);
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
  const MethodInfo *v12; // x6

  if ( (byte_4C4218C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4218C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__checkBattleVoicelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           isNp,
           v12);
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
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  int32_t v24; // w9
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 *v27; // x8
  System_String_o *v28; // x20
  System_String_o *v29; // x19
  System_String_o *v30; // x0
  System_String_o *v31; // x19
  int32_t v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C4218D & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&StringLiteral_9519/*"NoblePhantasm_"*/);
    sub_1C37058(&StringLiteral_25063/*"{0:D0}_{1}"*/);
    sub_1C37058(&StringLiteral_12761/*"Servants_"*/);
    byte_4C4218D = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v14);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v24 = overwriteSvtVoiceId;
  else
    v24 = VoiceId;
  v34 = VoicePrefix;
  v35 = v24;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v18, v19, v20, v21, v22, v23);
  v26 = System_String__Format_63602948((System_String_o *)StringLiteral_25063/*"{0:D0}_{1}"*/, v25, (Il2CppObject *)voiceTypeId, 0);
  if ( SvtEntity )
  {
    v27 = &StringLiteral_9519/*"NoblePhantasm_"*/;
    v28 = v26;
    if ( !isNp )
      v27 = &StringLiteral_12761/*"Servants_"*/;
    v29 = (System_String_o *)*v27;
    v30 = System_Int32__ToString((int32_t)&v35, 0);
    v31 = System_String__Concat_63561656(v29, v30, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    return SoundManager__checkServantVoice(v31, v28, 0, 0);
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

  if ( (byte_4C4213A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4213A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__checkLoadlocal((ServantAssetLoadManager_o *)Instance, v2);
}


bool ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_4C4213B & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C4213B = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_1C372B4(this);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v2->fields.soundCount > 0;
}


void ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C42124 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42124 = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = (struct ServantMaster_o *)MasterData_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtmaster, (int32_t)MasterData_object, v5, v6);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v7 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = (struct ServantLimitMaster_o *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtlimitmaster, (int32_t)v7, v8, v9);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (CGThumbnailListItem_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C372B4(Instance);
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (CGThumbnailListItem_c *)v12;
  sub_1C36FFC(p_svtlimitaddmaster, (int32_t)v12, v13, v14);
}


void ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4C42138 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42138 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  if ( (byte_4C42139 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4C42139 = 1;
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
    sub_1C372B4(this);
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
  UnityEngine_GameObject_o *v8; // x19
  System_String_o *v9; // x0
  Il2CppObject *v10; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42198 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C37058(&StringLiteral_18909/*"effect/ef_shadow0"*/);
    byte_4C42198 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(effectId, 0, 1, 1.0, 0);
    if ( EffectObjectSafe )
    {
      v8 = EffectObjectSafe;
      UnityEngine_GameObject__SetActive(EffectObjectSafe, 1, 0);
      return v8;
    }
LABEL_22:
    sub_1C372B4(EffectObjectSafe);
  }
  v15 = tp + 1;
  v9 = System_Int32__ToString((int32_t)&v15, 0);
  EffectObjectSafe = (UnityEngine_GameObject_o *)System_String__Concat_63561656(
                                                   (System_String_o *)StringLiteral_18909/*"effect/ef_shadow0"*/,
                                                   v9,
                                                   0);
  if ( !this->fields._releaseAssets )
    goto LABEL_22;
  v10 = (Il2CppObject *)EffectObjectSafe;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this->fields._releaseAssets,
         (Il2CppObject *)EffectObjectSafe,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)this->fields._releaseAssets;
    if ( !EffectObjectSafe )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)EffectObjectSafe,
             v10,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    if ( Item )
    {
      if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
        v12 = Item;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_object_(
                                                     (System_String_o *)v10,
                                                     (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( !releaseAssets )
      goto LABEL_22;
    v12 = (Il2CppObject *)EffectObjectSafe;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
      v10,
      (Il2CppObject *)EffectObjectSafe,
      (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       v12,
                                       (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void ServantAssetLoadManager__endloadList(ServantAssetLoadManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  Il2CppObject *name; // x20

  if ( (byte_4C4213E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4C4213E = 1;
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
           (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)loadlist,
        name,
        (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_1C372B4(loadlist);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadlist,
          name,
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
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
  const MethodInfo *v6; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4C42153 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&StringLiteral_12754/*"Servants/"*/);
    byte_4C42153 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  BattleChrId = ServantAssetLoadManager__getBattleChrId((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v6);
  return System_String__Concat_63561656((System_String_o *)StringLiteral_12754/*"Servants/"*/, BattleChrId, 0);
}


System_String_o *ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v7; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4C42152 & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&StringLiteral_12754/*"Servants/"*/);
    byte_4C42152 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0);
  if ( !Instance )
    sub_1C372B4(LimitCountByImageLimitCostumeIn);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(
                  (ServantAssetLoadManager_o *)Instance,
                  svtId,
                  LimitCountByImageLimitCostumeIn,
                  v7);
  return System_String__Concat_63561656((System_String_o *)StringLiteral_12754/*"Servants/"*/, BattleChrId, 0);
}


System_String_o *ServantAssetLoadManager__getActorFolderName_40690640(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42154 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_12754/*"Servants/"*/);
    byte_4C42154 = 1;
  }
  v11 = svtId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12754/*"Servants/"*/, v9, 0);
}


Il2CppObject *ServantAssetLoadManager__getAssetObject_object_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_318EC58 *method)
{
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C877C8();
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (Il2CppObject *)AssetManager__getAssetStorage(path, 0);
  if ( result )
    return AssetData__GetObject_object__51154888(
             (AssetData_o *)result,
             file,
             (const MethodInfo_30C8FC8 *)method->rgctx_data->_1_AssetData_GetObject_T_);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantAssetLoadManager__getBattleChrId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_1C372B4(0);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0);
}


System_String_o *ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = cameraId;
  if ( (byte_4C4219B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12755/*"Servants/Camera/"*/);
    byte_4C4219B = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63561656((System_String_o *)StringLiteral_12755/*"Servants/Camera/"*/, v2, 0);
}


System_String_o *ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42127 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_12757/*"Servants/Commands/"*/);
    byte_4C42127 = 1;
  }
  v11 = svtId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4, v5, v6, v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12757/*"Servants/Commands/"*/, v9, 0);
}


System_String_o *ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42126 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_12757/*"Servants/Commands/"*/);
    byte_4C42126 = 1;
  }
  v11 = svtId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4, v5, v6, v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12757/*"Servants/Commands/"*/, v9, 0);
}


System_String_o *ServantAssetLoadManager__getNameEffectPath(int32_t enemyNameEffectId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_4C421AF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5851/*"Effect/BattleCommon/NameEffect/"*/);
    byte_4C421AF = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63561656((System_String_o *)StringLiteral_5851/*"Effect/BattleCommon/NameEffect/"*/, v2, 0);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C4217C & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_5875/*"Effect/CutIn/Skill/{0}"*/);
    byte_4C4217C = 1;
  }
  v11 = cutInId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_5875/*"Effect/CutIn/Skill/{0}"*/, v9, 0);
}


System_String_o *ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C4212F & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_12760/*"Servants/Status/"*/);
    byte_4C4212F = 1;
  }
  v11 = svtId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4, v5, v6, v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12760/*"Servants/Status/"*/, v9, 0);
}


System_String_o *ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C4212E & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_12760/*"Servants/Status/"*/);
    byte_4C4212E = 1;
  }
  v11 = svtId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4, v5, v6, v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12760/*"Servants/Status/"*/, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *svtmaster; // x0

  if ( (byte_4C42125 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4C42125 = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtmaster;
  if ( !svtmaster )
    sub_1C372B4(0);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              svtmaster,
                              svtId,
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *ServantAssetLoadManager__getSvtLimitAddEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0;
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_1C372B4(0);
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
  ServantLimitMaster_o *svtlimitmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitmaster = this->fields.svtlimitmaster;
  if ( !svtlimitmaster )
    sub_1C372B4(0);
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

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0);
  if ( !this->fields.svtlimitaddmaster )
    sub_1C372B4(SvtVoiceId);
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

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0);
  if ( !this->fields.svtlimitaddmaster )
    sub_1C372B4(SvtVoiceId);
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
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_4C4216A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4216A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadActorEffectlocalFromActor(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           v9,
           name,
           v10);
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

  if ( (byte_4C4216B & 1) == 0 )
  {
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C37058(&StringLiteral_12754/*"Servants/"*/);
    byte_4C4216B = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v11 = System_String__Concat_63561656((System_String_o *)StringLiteral_12754/*"Servants/"*/, BattleChrId, 0);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v11,
                                       name,
                                       (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadActorMotion(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x4

  if ( (byte_4C42181 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42181 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadActorMotionlocal(
           (ServantAssetLoadManager_o *)Instance,
           parent,
           v7,
           weapongroup,
           v8);
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
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x20
  int32_t v17; // [xsp+Ch] [xbp-44h] BYREF

  v17 = weapongroup;
  if ( (byte_4C42182 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C37058(&StringLiteral_21656/*"motion"*/);
    sub_1C37058(&StringLiteral_12758/*"Servants/Motion/"*/);
    byte_4C42182 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v17, 0);
  v8 = System_String__Concat_63561656((System_String_o *)StringLiteral_12758/*"Servants/Motion/"*/, v7, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         v8,
                         (System_String_o *)StringLiteral_21656/*"motion"*/,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_18;
  v11 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !parent )
    goto LABEL_18;
  v12 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v12 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0);
  v13 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C921 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C929 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C929 = 1;
  }
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(v14, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0);
  v15 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C926 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v15 )
LABEL_18:
    sub_1C372B4(transform);
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v11;
}


UnityEngine_TextAsset_o *ServantAssetLoadManager__loadAnimEvents(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4C42166 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42166 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadAnimEventslocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *ServantAssetLoadManager__loadAnimEventslocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_40690640; // x0

  if ( (byte_4C42167 & 1) == 0 )
  {
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_19405/*"fbxevent"*/);
    byte_4C42167 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName_40690640(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  if ( !this )
    sub_1C372B4(ActorFolderName_40690640);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_object_(
                                      this,
                                      ActorFolderName_40690640,
                                      (System_String_o *)StringLiteral_19405/*"fbxevent"*/,
                                      (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
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
  const MethodInfo *v12; // x6

  if ( (byte_4C4215A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4215A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadBattleActorlocal(
           (ServantAssetLoadManager_o *)Instance,
           assetPath,
           parent,
           svtId,
           limitCount,
           isForce,
           v12);
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
  System_String_o *ActorFolderName_40690640; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *AssetObject_object; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Transform_o *v20; // x19
  UnityEngine_Transform_o *v21; // x19

  if ( (byte_4C4215B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_17961/*"chr"*/);
    byte_4C4215B = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName_40690640(
                                 svtId,
                                 (const MethodInfo *)assetPath);
  else
    ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  *assetPath = ActorFolderName_40690640;
  sub_1C36FFC((CGThumbnailListItem_o *)assetPath, (int32_t)ActorFolderName_40690640, v14, v15);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         *assetPath,
                         (System_String_o *)StringLiteral_17961/*"chr"*/,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_21;
  v18 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !parent )
    goto LABEL_21;
  v19 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v19 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0);
  v20 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C929 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C929 = 1;
  }
  if ( !v20 )
    goto LABEL_21;
  UnityEngine_Transform__set_eulerAngles(v20, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0);
  v21 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C926 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v21 )
LABEL_21:
    sub_1C372B4(transform);
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v18;
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C42178 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42178 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal((ServantAssetLoadManager_o *)Instance, path, name, v6);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51154888; // x19

  if ( (byte_4C42179 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42179 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                AssetStorage,
                                name,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  else
    Object_object__51154888 = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    return (UnityEngine_GameObject_o *)Object_object__51154888;
  else
    return 0;
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadCameraAction(
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C4219D & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4219D = 1;
  }
  if ( !cameraId )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, parent, v6);
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
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x19
  UnityEngine_Transform_o *v13; // x19

  if ( (byte_4C4219E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_17703/*"cameraAction"*/);
    byte_4C4219E = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CameraActionPath,
                         (System_String_o *)StringLiteral_17703/*"cameraAction"*/,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              AssetObject_object,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !parent )
      goto LABEL_22;
    v11 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0);
    if ( !v11 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
    v12 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C3C929 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C929 = 1;
    }
    if ( !v12 )
      goto LABEL_22;
    UnityEngine_Transform__set_eulerAngles(v12, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C3C926 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v13 )
LABEL_22:
      sub_1C372B4(transform);
    UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_4C4212A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4212A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadCommandCardlocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           svtId,
           v9,
           commandLimit,
           v10);
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
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C4212B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_17779/*"card_servant_"*/);
    byte_4C4212B = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v10);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v11, v12);
  v14 = System_Int32__ToString((int32_t)&LimitImageIndex, 0);
  v15 = System_String__Concat_63561656((System_String_o *)StringLiteral_17779/*"card_servant_"*/, v14, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCardLoadFolderName,
                         v15,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
        sub_1C372B4(v19);
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
  const MethodInfo *v6; // x3

  if ( (byte_4C421A1 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_40710000(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           userCommandCodeId,
           v6);
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *CommandCodeFolderName; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v17; // w8
  UITexture_o *result; // x0
  _BOOL8 v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C421A3 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_17687/*"c_{0:D7}"*/);
    byte_4C421A3 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v20 = commandCodeId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v8, v9, v10, v11, v12, v13);
  v15 = System_String__Format((System_String_o *)StringLiteral_17687/*"c_{0:D7}"*/, v14, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCodeFolderName,
                         v15,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
        sub_1C372B4(v19);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
        tex,
        AssetObject_object,
        tex->klass->vtable._27_set_mainTexture.method);
    }
    return tex;
  }
  return result;
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTextureLocal_40710000(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v10; // w0
  const MethodInfo *v11; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C421A4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C37058(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C421A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0;
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userCommandCodeId,
                               (const MethodInfo_33A3648 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1C372B4(Instance);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = klass;
  *(_QWORD *)&v14.fields.fakeValue = monitor;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14, 0);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v10, v11);
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTexture_40710268(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C421A2 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           commandCodeId,
           v6);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadCommonEffect(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4216E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4216E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadCommonEffectlocal((ServantAssetLoadManager_o *)Instance, name, v4);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  UnityEngine_Object_o *v5; // x0
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4C4216F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_18876/*"effect/"*/);
    byte_4C4216F = 1;
  }
  v4 = System_String__Concat_63561656((System_String_o *)StringLiteral_18876/*"effect/"*/, name, 0);
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
                                       (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4C4216C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4216C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v8);
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

  if ( (byte_4C4216D & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4216D = 1;
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

  return StandFigureManager__CreateRenderPrefab_40676404(
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
  const MethodInfo *v10; // x5

  if ( (byte_4C42136 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42136 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadNobleNamelocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           svtId,
           limit,
           treasureDvcId,
           v10);
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
  Il2CppObject *v13; // x25
  ServantLimitAddMaster_o *v14; // x26
  long double v15; // q0
  int32_t v16; // w1
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
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x2
  ServantAssetLoadManager_o *v38; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  int v41; // s0 OVERLAPPED
  float v42; // s1
  float v43; // s2
  float v44; // s3
  unsigned int v45; // [xsp+Ch] [xbp-54h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C42137 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_17780/*"card_servant_np"*/);
    byte_4C42137 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v13 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          svtId,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  entity = 0;
  if ( !v13 )
    goto LABEL_49;
  v14 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)v13, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_16;
  if ( !v14 )
    goto LABEL_49;
  if ( !ServantLimitAddMaster__TryGetEntity(v14, &entity, svtId, limit, 0) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_49;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0) )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v16, v17);
    if ( !entity )
      goto LABEL_49;
    v18 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(entity, 0);
    AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                           this,
                           v18,
                           OverwriteTDFileName,
                           (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_16:
    if ( EntityFromIDID )
    {
      v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      v23 = (System_String_o *)StringLiteral_17780/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
        v22 = sub_1C8776C(v15);
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1C8776C(v15);
      Instance = **(DataManager_o ***)(v24 + 184);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_49;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0) )
        v23 = System_String__Concat_63599904(v23, (System_String_o *)StringLiteral_16109/*"_"*/, NpNameFileSuffix, 0);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v27);
        v38 = this;
        v37 = v23;
      }
      else
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        v28 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v27);
        v45 = (unsigned int)imageIndex >> 1;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v29, v30, v31, v32, v33, v34);
        v36 = System_String__Format((System_String_o *)StringLiteral_25101/*"{0}"*/, v35, 0);
        v37 = System_String__Concat_63561656(v23, v36, 0);
        v38 = this;
        CommandCardLoadFolderName = v28;
      }
      AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                             v38,
                             CommandCardLoadFolderName,
                             v37,
                             (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
      v41 = 0;
      if ( (imageIndex & 1) != 0 )
        v42 = 0.0;
      else
        v42 = 0.5;
      v43 = 1.0;
      v44 = 0.5;
      UITexture__set_uvRect(tex, *(UnityEngine_Rect_o *)&v41, 0);
      return 1;
    }
LABEL_49:
    sub_1C372B4(Instance);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71252324(
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
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C42194 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_TypeInfo);
    byte_4C42194 = 1;
  }
  v15 = sub_1C372A4(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)this, v16, v17);
  *(_QWORD *)(v15 + 40) = parent;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 40), (int32_t)parent, v18, v19);
  *(_DWORD *)(v15 + 48) = svtId;
  *(_DWORD *)(v15 + 64) = treasureDvcId;
  *(_DWORD *)(v15 + 68) = treasureDvcLv;
  *(_QWORD *)(v15 + 72) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 72), (int32_t)callback, v20, v21);
  return (System_Collections_IEnumerator_o *)v15;
}


void ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C4217D & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4217D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__loadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, callback, v6);
}


void ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  System_String_o *SkillCutInPath; // x20

  if ( (byte_4C4217E & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C37058(&AssetManager_TypeInfo);
    byte_4C4217E = 1;
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
  const MethodInfo *v8; // x4

  if ( (byte_4C42132 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42132 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadStatusFacelocal((ServantAssetLoadManager_o *)Instance, tex, svtID, limit, v8);
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
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C42133 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&StringLiteral_23696/*"status_servant_"*/);
    byte_4C42133 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v9);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v10, v11);
  v13 = System_Int32__ToString((int32_t)&LimitImageIndex, 0);
  v14 = System_String__Concat_63561656((System_String_o *)StringLiteral_23696/*"status_servant_"*/, v13, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         StatusImageFolderName,
                         v14,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
        sub_1C372B4(v18);
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
  const MethodInfo *v8; // x4

  if ( (byte_4C42172 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42172 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v8);
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
  Il2CppObject *Object_object__51154888; // x19
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v13 = effectFolder;
  v14 = weapongroup;
  if ( (byte_4C42173 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5908/*"Effect/weapon/"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C42173 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v14, 0);
  v8 = System_String__Concat_63561656((System_String_o *)StringLiteral_5908/*"Effect/weapon/"*/, v7, 0);
  if ( effectFolder )
  {
    v9 = System_Int32__ToString((int32_t)&v13, 0);
    v8 = System_String__Concat_63599904(v8, (System_String_o *)StringLiteral_1048/*"/"*/, v9, 0);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v8, 0);
  if ( AssetStorage )
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                AssetStorage,
                                name,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  else
    Object_object__51154888 = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    return (UnityEngine_GameObject_o *)Object_object__51154888;
  else
    return 0;
}


void ServantAssetLoadManager__localStopVoice(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        float fadeoutTime,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0

  if ( (byte_4C42191 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    byte_4C42191 = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         ActorVoice,
         uniqueId,
         (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             ActorVoice,
                                                                             uniqueId,
                                                                             (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0);
        return;
      }
    }
LABEL_9:
    sub_1C372B4(ActorVoice);
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
  const MethodInfo *v19; // [xsp+8h] [xbp-68h]

  if ( (byte_4C42185 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42185 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
           v19);
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
  const MethodInfo *v12; // x5

  if ( (byte_4C42188 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42188 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__playBattleVoiceSelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           fileName,
           volume,
           v12);
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

  if ( (byte_4C42189 & 1) == 0 )
  {
    sub_1C37058(&Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    sub_1C37058(&StringLiteral_12754/*"Servants/"*/);
    byte_4C42189 = 1;
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
      v16 = (_QWORD *)sub_1C37070(Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
    v18 = System_Int32__ToString((int32_t)&v20, 0);
    v19 = System_String__Concat_63561656((System_String_o *)StringLiteral_12754/*"Servants/"*/, v18, 0);
    return OverwriteAssetSoundName__PlaySe_41420232(v17, v19, targetFileName, volume, 0, 0, 0);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x28
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  int32_t VoicePrefix; // w0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  System_String_o **v38; // x8
  System_String_o *v39; // x22
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v42; // x22
  System_String_o *v43; // x24
  System_Action_o *v44; // x25
  Il2CppObject *v46; // x0
  int32_t v47; // [xsp+8h] [xbp-68h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C42186 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager___c__DisplayClass139_0__playBattleVoicelocal_b__0__);
    sub_1C37058(&ServantAssetLoadManager___c__DisplayClass139_0_TypeInfo);
    sub_1C37058(&StringLiteral_25063/*"{0:D0}_{1}"*/);
    sub_1C37058(&StringLiteral_12754/*"Servants/"*/);
    sub_1C37058(&StringLiteral_9515/*"NoblePhantasm/"*/);
    byte_4C42186 = 1;
  }
  v20 = sub_1C372A4(ServantAssetLoadManager___c__DisplayClass139_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v20 + 24) = callback;
  v24 = v20 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 24), (int32_t)callback, v25, v26);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v27);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v29);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v30);
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
               (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__object___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   ActorVoice,
                                                                                   uniqueId,
                                                                                   (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
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
          (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v38 = (System_String_o **)(isNp ? &StringLiteral_9515/*"NoblePhantasm/"*/ : &StringLiteral_12754/*"Servants/"*/);
        v39 = *v38;
        v40 = System_Int32__ToString((int32_t)&VoiceId, 0);
        v41 = System_String__Concat_63561656(v39, v40, 0);
        v42 = this->fields.ActorVoice;
        v43 = v41;
        v44 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v44,
          (Il2CppObject *)v20,
          Method_ServantAssetLoadManager___c__DisplayClass139_0__playBattleVoicelocal_b__0__,
          0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)SoundManager__playVoice_41518412(
                                                                               v43,
                                                                               targetFileName,
                                                                               volume,
                                                                               v44,
                                                                               0,
                                                                               0);
        if ( v42 )
        {
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)v42,
            uniqueId,
            (Il2CppObject *)ActorVoice,
            (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_1C372B4(ActorVoice);
    }
  }
  else
  {
    v47 = VoicePrefix;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v32, v33, v34, v35, v36, v37);
    targetFileName = System_String__Format_63602948(
                       (System_String_o *)StringLiteral_25063/*"{0:D0}_{1}"*/,
                       v46,
                       (Il2CppObject *)voiceTypeId,
                       0);
    if ( SvtEntity )
      goto LABEL_8;
  }
  if ( *(_QWORD *)v24 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v24 + 64LL),
      *(_QWORD *)(*(_QWORD *)v24 + 40LL));
  return 0;
}


void ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = weapongroup;
  if ( (byte_4C42180 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&StringLiteral_12758/*"Servants/Motion/"*/);
    byte_4C42180 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_12758/*"Servants/Motion/"*/, v5, 0);
  if ( !Instance )
    sub_1C372B4(v6);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v6, dlOnly, v7);
}


void ServantAssetLoadManager__preloadBattleActor(ServantAssetArgs_o *args, bool isForce, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x6

  if ( (byte_4C42155 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42155 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1C372B4(Instance);
  ServantAssetLoadManager__preloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._LoadActorLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    isForce,
    0,
    v6);
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
  System_String_o *ActorFolderName_40690640; // x0
  const MethodInfo *v15; // x3

  if ( (byte_4C42156 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C42156 = 1;
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
      ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName_40690640(v13, *(const MethodInfo **)&svtId);
      goto LABEL_10;
    }
  }
  ActorFolderName_40690640 = ServantAssetLoadManager__getActorFolderName(
                               v13,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_10:
  if ( !this )
    sub_1C372B4(ActorFolderName_40690640);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_40690640, dlOnly, v15);
}


System_String_array *ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C42176 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42176 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           effectIdList,
           v4);
}


System_String_array *ServantAssetLoadManager__preloadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  System_String_array *BattleCommonEffectPathList; // x0
  const MethodInfo *v6; // x3
  il2cpp_array_size_t max_length; // x8
  System_String_array *v8; // x20
  unsigned __int64 v9; // x21

  if ( (byte_4C42177 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    byte_4C42177 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0);
  if ( !BattleCommonEffectPathList )
    sub_1C372B4(0);
  max_length = BattleCommonEffectPathList->max_length;
  v8 = BattleCommonEffectPathList;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C372BC(BattleCommonEffectPathList);
      ServantAssetLoadManager__setLoadList(this, v8->m_Items[v9], 0, v6);
      LODWORD(max_length) = v8->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  return v8;
}


void ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x21
  System_String_o *CameraActionPath; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4C4219C & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4219C = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v5);
    if ( !Instance )
      sub_1C372B4(CameraActionPath);
    ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, CameraActionPath, dlOnly, v8);
  }
}


void ServantAssetLoadManager__preloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x4

  if ( (byte_4C42128 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42128 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__preloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v5, 0, v6);
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

  if ( (byte_4C42129 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C42129 = 1;
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
  if ( (byte_4C421A5 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C421A5 = 1;
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
          sub_1C372BC(this);
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

  if ( (byte_4C4214E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4214E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v5; // x20
  unsigned __int64 v6; // x24
  bool *p_DispLog; // x28
  SoundManager_o *v8; // x21
  System_String_o *VoiceAssetName; // x22
  System_Action_o *v10; // x23

  if ( (byte_4C4214F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
    sub_1C37058(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C4214F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___getEntitys(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      (const MethodInfo_33A0324 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__)) == 0 )
  {
LABEL_21:
    sub_1C372B4(Instance);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v5 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0;
    p_DispLog = &Instance->fields._DispLog;
    do
    {
      if ( v6 >= (unsigned int)m_CancellationTokenSource )
LABEL_20:
        sub_1C372BC(Instance);
      Instance = *(DataManager_o **)&p_DispLog[8 * v6];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
            goto LABEL_20;
          Instance = *(DataManager_o **)&p_DispLog[8 * v6];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
              goto LABEL_20;
            v8 = (SoundManager_o *)Instance;
            Instance = *(DataManager_o **)&p_DispLog[8 * v6];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
            v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v10,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0);
            if ( !v8 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v8, VoiceAssetName, v10, 1, 0);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      ++v6;
    }
    while ( (__int64)v6 < (int)m_CancellationTokenSource );
  }
}


void ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        bool dlOnly,
        const MethodInfo *method)
{
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  System_String_o *NameEffectPath; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4C421AC & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421AC = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0);
    if ( EnemyNameEffect )
    {
      v7 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v7, v6);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_1C372B4(0);
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, NameEffectPath, dlOnly, v10);
    }
  }
}


void ServantAssetLoadManager__preloadServant(ServantAssetArgs_o *args, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C42143 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42143 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__preloadServantlocal((ServantAssetLoadManager_o *)Instance, args, dlOnly, v6);
}


void ServantAssetLoadManager__preloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x5

  if ( (byte_4C42146 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42146 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__preloadServantVoicelocal(
    (ServantAssetLoadManager_o *)Instance,
    svtId,
    limitCount,
    overwriteSvtVoiceId,
    0,
    v8);
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
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C42147 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__);
    sub_1C37058(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&StringLiteral_12761/*"Servants_"*/);
    byte_4C42147 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v12 = overwriteSvtVoiceId;
  else
    v12 = VoiceId;
  v19 = v12;
  if ( v12 )
  {
    ++this->fields.soundCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v14 = System_Int32__ToString((int32_t)&v19, 0);
    v15 = System_String__Concat_63561656((System_String_o *)StringLiteral_12761/*"Servants_"*/, v14, 0);
    v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
      sub_1C372B4(v18);
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
    sub_1C372B4(this);
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
  const MethodInfo *v6; // x3

  if ( (byte_4C4214A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4214A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__preloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, dlOnly, v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__preloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *v10; // x0
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v13; // x21
  System_String_o *VoiceAssetName; // x20
  System_Action_o *v15; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v17; // x21
  System_Action_o *v18; // x22

  if ( (byte_4C4214B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__);
    sub_1C37058(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C4214B = 1;
  }
  if ( skillInfo
    && ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
         skillInfo,
         skillInfo->klass->vtable._5_get_skillId.method,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8776C(v7);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(v7);
    v10 = **(DataManager_o ***)(v9 + 184);
    if ( v10 )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            v10,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v10 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                               skillInfo,
                               skillInfo->klass->vtable._5_get_skillId.method);
      if ( MasterData_object )
      {
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   (int32_t)v10,
                   skillInfo->fields.skilllv,
                   0);
        if ( !Entity )
          return;
        v13 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v13, 0);
          v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v15, 1, 0);
          return;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v17 = SkillLvEntity__getVoiceAssetName(v13, 0);
        v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v17, v18, 1, 0);
          return;
        }
      }
    }
    sub_1C372B4(v10);
  }
}


void ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x4

  if ( (byte_4C42130 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42130 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__preloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v5, 0, v6);
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

  if ( (byte_4C42131 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C42131 = 1;
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
  const MethodInfo *v10; // x3
  System_Object_array *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
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
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  const MethodInfo *v50; // x3
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  Il2CppObject *v57; // x20
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  Il2CppObject *v64; // x21
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x2
  System_String_o *v67; // x20
  __int64 v68; // x0
  int32_t v69; // [xsp+0h] [xbp-60h] BYREF
  int32_t v70; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v71; // [xsp+8h] [xbp-58h] BYREF
  int v72; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v73; // [xsp+18h] [xbp-48h] BYREF
  int32_t v74; // [xsp+1Ch] [xbp-44h] BYREF

  v73 = effectFolder;
  v74 = weapongroup;
  if ( (byte_4C42170 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&StringLiteral_5908/*"Effect/weapon/"*/);
    sub_1C37058(&StringLiteral_5914/*"Effect/weapon/{0}/{1}/usm/battle_{2}_mov{3}.usm"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    sub_1C37058(&StringLiteral_5911/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/);
    sub_1C37058(&StringLiteral_4953/*"D3"*/);
    byte_4C42170 = 1;
  }
  v72 = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v7 = System_Int32__ToString((int32_t)&v74, 0);
  if ( !effectFolder )
  {
    v9 = System_String__Concat_63561656((System_String_o *)StringLiteral_5908/*"Effect/weapon/"*/, v7, 0);
    if ( Instance )
    {
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v9, dlOnly, v50);
      while ( 1 )
      {
        v71 = v74;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v51, v52, v53, v54, v55, v56);
        v70 = v74;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v58, v59, v60, v61, v62, v63);
        v65 = (Il2CppObject *)System_Int32__ToString_65071764((int32_t)&v72, (System_String_o *)StringLiteral_4953/*"D3"*/, 0);
        v67 = System_String__Format_63603016((System_String_o *)StringLiteral_5911/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v57, v64, v65, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        if ( !ServantAssetLoadManager__SetNeedDownloadList(v67, dlOnly, v66) )
          break;
        ++v72;
      }
      return;
    }
LABEL_23:
    sub_1C372B4(v9);
  }
  v8 = System_Int32__ToString((int32_t)&v73, 0);
  v9 = System_String__Concat_63601908(
         (System_String_o *)StringLiteral_5908/*"Effect/weapon/"*/,
         v7,
         (System_String_o *)StringLiteral_1048/*"/"*/,
         v8,
         0);
  if ( !Instance )
    goto LABEL_23;
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v9, dlOnly, v10);
  v11 = (System_Object_array *)sub_1C37100(object___TypeInfo, 4);
  v71 = v74;
  v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v12, v13, v14, v15, v16, v17);
  if ( !v11 )
    goto LABEL_23;
  v20 = (Il2CppObject *)v9;
  while ( 1 )
  {
    if ( v20 )
    {
      v9 = (System_String_o *)sub_1C37194(v20, v11->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( !LODWORD(v11->max_length) )
      goto LABEL_31;
    v11->m_Items[0] = v20;
    sub_1C36FFC((CGThumbnailListItem_o *)v11->m_Items, (int32_t)v20, v18, v19);
    v70 = v73;
    v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v21, v22, v23, v24, v25, v26);
    v29 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_1C37194(v9, v11->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( LODWORD(v11->max_length) <= 1 )
      goto LABEL_31;
    v11->m_Items[1] = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)&v11->m_Items[1], (int32_t)v29, v27, v28);
    v69 = v74;
    v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v30, v31, v32, v33, v34, v35);
    v38 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_1C37194(v9, v11->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( LODWORD(v11->max_length) <= 2 )
      goto LABEL_31;
    v11->m_Items[2] = v38;
    sub_1C36FFC((CGThumbnailListItem_o *)&v11->m_Items[2], (int32_t)v38, v36, v37);
    v9 = System_Int32__ToString_65071764((int32_t)&v72, (System_String_o *)StringLiteral_4953/*"D3"*/, 0);
    v41 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_1C37194(v9, v11->obj.klass->_1.element_class);
      if ( !v9 )
      {
LABEL_32:
        v68 = sub_1C372D8(v9);
        sub_1C37180(v68, 0);
      }
    }
    if ( LODWORD(v11->max_length) <= 3 )
LABEL_31:
      sub_1C372BC(v9);
    v11->m_Items[3] = v41;
    sub_1C36FFC((CGThumbnailListItem_o *)&v11->m_Items[3], (int32_t)v41, v39, v40);
    v43 = System_String__Format_63603084((System_String_o *)StringLiteral_5914/*"Effect/weapon/{0}/{1}/usm/battle_{2}_mov{3}.usm"*/, v11, 0);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    if ( !ServantAssetLoadManager__SetNeedDownloadList(v43, dlOnly, v42) )
      break;
    ++v72;
    v11 = (System_Object_array *)sub_1C37100(object___TypeInfo, 4);
    v71 = v74;
    v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v44, v45, v46, v47, v48, v49);
    v20 = (Il2CppObject *)v9;
    if ( !v11 )
      goto LABEL_23;
  }
}


void ServantAssetLoadManager__releaseNoblePhantasm(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  AssetData_o *nobleAssetData; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  AssetData_o *nobleSequenceData; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *nobleEffectList; // x0
  System_String_array *v14; // x0
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_List_string__o *v16; // x8
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C42196 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4C42196 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0);
    this->fields.nobleAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nobleAssetData, 0, v4, v5);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0);
    this->fields.nobleSequenceData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nobleSequenceData, 0, v7, v8);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)bgAssetDataList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1C372B4(0);
      AssetData__RemoveEntry((AssetData_o *)v19.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgAssetDataList, (int32_t)v10, v11, v12);
  }
  nobleEffectList = (System_Collections_Generic_List_object__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_20;
  if ( nobleEffectList->fields._size <= 0 )
    return;
  v14 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v14, v15);
  v16 = this->fields.nobleEffectList;
  if ( !v16 )
LABEL_20:
    sub_1C372B4(nobleEffectList);
  size = v16->fields._size;
  v18 = v16->fields._version + 1;
  v16->fields._size = 0;
  v16->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0);
}


void ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *downloadlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8
  struct System_Object_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x8
  char v16; // w2
  const MethodInfo *v17; // x3
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x8
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_4C4213C & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_endloadList__);
    byte_4C4213C = 1;
  }
  if ( dlOnly )
  {
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
    if ( downloadlist )
    {
      items = downloadlist->fields._items;
      v9 = Method_System_Collections_Generic_List_string__Add__;
      ++downloadlist->fields._version;
      if ( items )
      {
        size = downloadlist->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            downloadlist,
            (Il2CppObject *)path,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
        }
        else
        {
          v11 = &items->obj.klass + size;
          downloadlist->fields._size = size + 1;
          v11[4] = (Il2CppClass *)path;
          sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 4), (int32_t)path, dlOnly, method);
        }
        v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager_endloadList__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__downloadAssetStorage(path, v18, 20, 0) )
          return;
        downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
        if ( downloadlist )
        {
          System_Collections_Generic_List_object___Remove(
            downloadlist,
            (Il2CppObject *)path,
            (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
          return;
        }
      }
    }
LABEL_28:
    sub_1C372B4(downloadlist);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadedList;
  if ( !downloadlist )
    goto LABEL_28;
  v12 = downloadlist->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++downloadlist->fields._version;
  if ( !v12 )
    goto LABEL_28;
  v14 = downloadlist->fields._size;
  if ( (unsigned int)v14 >= LODWORD(v12->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      downloadlist,
      (Il2CppObject *)path,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &v12->obj.klass + v14;
    downloadlist->fields._size = v14 + 1;
    v15[4] = (Il2CppClass *)path;
    sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)path, dlOnly, method);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_28;
  v19 = downloadlist->fields._items;
  v20 = Method_System_Collections_Generic_List_string__Add__;
  ++downloadlist->fields._version;
  if ( !v19 )
    goto LABEL_28;
  v21 = downloadlist->fields._size;
  if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      downloadlist,
      (Il2CppObject *)path,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    downloadlist->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)path;
    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)path, v16, v17);
  }
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v23, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40541316(path, 20, v23, 0);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C4213D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C4213D = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(path, 0) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, v7);
}


void ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C42183 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42183 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadActorMotionlocal((ServantAssetLoadManager_o *)Instance, weapongroup, v4);
}


void ServantAssetLoadManager__unloadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  Il2CppObject *loadedList; // x0
  Il2CppObject *v6; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = weapongroup;
  if ( (byte_4C42184 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&StringLiteral_12758/*"Servants/Motion/"*/);
    byte_4C42184 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  loadedList = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_12758/*"Servants/Motion/"*/, v4, 0);
  if ( !this->fields.loadedList )
    goto LABEL_10;
  v6 = loadedList;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          loadedList,
          (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = (Il2CppObject *)this->fields.loadedList;
  if ( !loadedList )
LABEL_10:
    sub_1C372B4(loadedList);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    v6,
    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v6, 0);
  AssetManager__releaseAsset_40534712(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4C42199 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42199 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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

  if ( (byte_4C4219A & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C4219A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)loadedList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40534712(AssetStorage, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.loadedList;
  if ( !v6 )
LABEL_16:
    sub_1C372B4(loadedList);
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
  const MethodInfo *v4; // x4

  if ( (byte_4C4215C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4215C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1C372B4(Instance);
  ServantAssetLoadManager__unloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._LoadActorLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v4);
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
  Il2CppObject *v10; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4C4215D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C4215D = 1;
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
  v10 = ActorFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          ActorFolderName,
          (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_11;
  ActorFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !ActorFolderName )
LABEL_14:
    sub_1C372B4(ActorFolderName);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)ActorFolderName,
    v10,
    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_11:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v10, 0);
  AssetManager__releaseAsset_40534712(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4219F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4219F = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    ServantAssetLoadManager__unloadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, v4);
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

  if ( (byte_4C421A0 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C421A0 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v6);
}


void ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C4212C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4212C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__unloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *CommandCardLoadFolderName; // x0
  Il2CppObject *v7; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4C4212D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C4212D = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCardLoadFolderName = (Il2CppObject *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                svtId,
                                                svtId,
                                                *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v7 = CommandCardLoadFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          CommandCardLoadFolderName,
          (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  CommandCardLoadFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !CommandCardLoadFolderName )
LABEL_12:
    sub_1C372B4(CommandCardLoadFolderName);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)CommandCardLoadFolderName,
    v7,
    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v7, 0);
  AssetManager__releaseAsset_40534712(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4C42150 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42150 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  int v3; // w8
  _DWORD *v4; // x19
  unsigned int i; // w21
  char *v6; // x23
  CommandSpellEntity_o *v7; // x0
  void **v8; // x23
  CommandSpellEntity_o *v9; // t1
  SoundManager_o *v10; // x20

  if ( (byte_4C42151 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C42151 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___getEntitys(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     (const MethodInfo_33A0324 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__)) == 0 )
  {
LABEL_21:
    sub_1C372B4(Instance);
  }
  v3 = *((_DWORD *)Instance + 6);
  v4 = Instance;
  if ( v3 >= 1 )
  {
    for ( i = 0; (int)i < v3; ++i )
    {
      if ( i >= v3 )
LABEL_20:
        sub_1C372BC(Instance);
      v6 = (char *)&v4[2 * i];
      v9 = (CommandSpellEntity_o *)*((_QWORD *)v6 + 4);
      v8 = (void **)(v6 + 32);
      v7 = v9;
      if ( !v9 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v7, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v4[6] )
          goto LABEL_20;
        Instance = *v8;
        if ( !*v8 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v4[6] )
            goto LABEL_20;
          v10 = (SoundManager_o *)Instance;
          Instance = *v8;
          if ( !*v8 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
          if ( !v10 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v10, (System_String_o *)Instance, 0);
        }
      }
      v3 = v4[6];
    }
  }
}


void ServantAssetLoadManager__unloadFromDeckServant(BattleDeckServantData_o *deckSvt, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C421AD & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C421AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadFromDeckServantlocal((ServantAssetLoadManager_o *)Instance, deckSvt, v4);
}


void ServantAssetLoadManager__unloadFromDeckServantlocal(
        ServantAssetLoadManager_o *this,
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  System_String_o *NameEffectPath; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4C421AE & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C421AE = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0);
    if ( EnemyNameEffect )
    {
      v7 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v7, v6);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, NameEffectPath, v9);
    }
  }
}


void ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C42144 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42144 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadServantlocal((ServantAssetLoadManager_o *)Instance, args, v4);
}


void ServantAssetLoadManager__unloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4C42148 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42148 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadServantVoicelocal(
    (ServantAssetLoadManager_o *)Instance,
    svtId,
    limitCount,
    overwriteSvtVoiceId,
    v8);
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
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C42149 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&StringLiteral_12761/*"Servants_"*/);
    byte_4C42149 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v10 = overwriteSvtVoiceId;
  else
    v10 = VoiceId;
  v14 = v10;
  if ( v10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v12 = System_Int32__ToString((int32_t)&v14, 0);
    v13 = System_String__Concat_63561656((System_String_o *)StringLiteral_12761/*"Servants_"*/, v12, 0);
    if ( !Instance )
      sub_1C372B4(v13);
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
    sub_1C372B4(this);
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
  const MethodInfo *v4; // x2

  if ( (byte_4C4214C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4214C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v4);
}


void ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  DataManager_o *VoiceAssetName; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v10; // x19
  Il2CppObject *Instance; // x20

  if ( (byte_4C4214D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C4214D = 1;
  }
  if ( skillInfo
    && ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
         skillInfo,
         skillInfo->klass->vtable._5_get_skillId.method,
         method)
    && skillInfo->fields.skilllv )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C8776C(v4);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C8776C(v4);
    VoiceAssetName = **(DataManager_o ***)(v6 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          VoiceAssetName,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
      v10 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = (DataManager_o *)SkillLvEntity__getVoiceAssetName(v10, 0);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)VoiceAssetName, 0);
          return;
        }
LABEL_17:
        sub_1C372B4(VoiceAssetName);
      }
    }
  }
}


void ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4217F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4217F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v4);
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
  const MethodInfo *v6; // x3

  if ( (byte_4C42134 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42134 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadStatusFacelocal((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v6);
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
  Il2CppObject *v10; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4C42135 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C42135 = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = (Il2CppObject *)ServantAssetLoadManager__getStatusImageFolderName(svtId, v7, v8);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v10 = StatusImageFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          StatusImageFolderName,
          (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  StatusImageFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !StatusImageFolderName )
LABEL_12:
    sub_1C372B4(StatusImageFolderName);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)StatusImageFolderName,
    v10,
    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v10, 0);
  AssetManager__releaseAsset_40534712(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v7; // x19

  if ( (byte_4C4217B & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4C4217B = 1;
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_14;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)path,
          (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_14:
    sub_1C372B4(loadedList);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)path,
    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
  {
    v7 = AssetStorage;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(v7, 0);
  }
}


void ServantAssetLoadManager__unloadTargetPathAssets(System_String_array *pathList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4217A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C4217A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal((ServantAssetLoadManager_o *)Instance, pathList, v4);
}


void ServantAssetLoadManager__unloadTargetPathAssetsLocal(
        ServantAssetLoadManager_o *this,
        System_String_array *pathList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  if ( !pathList )
    sub_1C372B4(this);
  max_length = pathList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C372BC(this);
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
  const MethodInfo *v6; // x3

  if ( (byte_4C42174 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C42174 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
    (ServantAssetLoadManager_o *)Instance,
    weapongroup,
    effectFolder,
    v6);
}


void ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v11 = effectFolder;
  v12 = weapongroup;
  if ( (byte_4C42175 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&StringLiteral_5908/*"Effect/weapon/"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C42175 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v12, 0);
  v7 = System_String__Concat_63561656((System_String_o *)StringLiteral_5908/*"Effect/weapon/"*/, v6, 0);
  if ( effectFolder )
  {
    v8 = System_Int32__ToString((int32_t)&v11, 0);
    v7 = System_String__Concat_63599904(v7, (System_String_o *)StringLiteral_1048/*"/"*/, v8, 0);
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_12;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)v7,
          (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_12:
    sub_1C372B4(loadedList);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)v7,
    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v7, 0);
  AssetManager__releaseAsset_40534712(AssetStorage, 0);
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
  const MethodInfo *v3; // x3
  ServantAssetLoadManager__GetAheadBg_d__159_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_object__o *v8; // x22
  ServantAssetLoadManager__GetAheadBg_d__159_o **p_bgAheadList_5__2; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct WellFired_USFGOChangeBgEvent_array *v14; // x22
  int max_length; // w8
  unsigned int v16; // w23
  WellFired_USFGOChangeBgEvent_o *v17; // x1
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 _2__current_low; // x10
  __int64 v21; // x8
  System_String_o *BgAssetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  struct System_Collections_Generic_List_USFGOChangeBgEvent__o *bgAheadList_5__2; // x8
  _DWORD *monitor; // x9
  struct System_Action_o *callback; // x8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v28; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4C421C0 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager__GetAheadBg_b__159_0__);
    this = (ServantAssetLoadManager__GetAheadBg_d__159_o *)sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C421C0 = 1;
  }
  memset(&v33, 0, sizeof(v33));
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
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return 0;
    }
    v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v4->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v8;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__159_o **)&v4->fields._bgAheadList_5__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._bgAheadList_5__2, (int32_t)v8, v10, v11);
    v14 = v4->fields.bgList;
    if ( !v14 )
      goto LABEL_35;
    max_length = v14->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
          sub_1C372BC(this);
        v17 = v14->m_Items[v16];
        if ( !v17 )
          break;
        if ( v17->fields.aheadLoad )
        {
          this = *p_bgAheadList_5__2;
          if ( !*p_bgAheadList_5__2 )
            break;
          v18 = *(_QWORD *)&this->fields.__1__state;
          v19 = Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__;
          ++HIDWORD(this->fields.__2__current);
          if ( !v18 )
            break;
          _2__current_low = SLODWORD(this->fields.__2__current);
          if ( (unsigned int)_2__current_low >= *(_DWORD *)(v18 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v17,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = v18 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v21 + 32) = v17;
            sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v17, v12, v13);
          }
        }
        max_length = v14->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_18;
      }
LABEL_35:
      sub_1C372B4(this);
    }
LABEL_18:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_35;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v33.fields._current )
        sub_1C372B4(0);
      BgAssetPath = WellFired_USFGOChangeBgEvent__GetBgAssetPath(
                      (WellFired_USFGOChangeBgEvent_o *)v33.fields._current,
                      0);
      v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v23, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__159_0__, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(BgAssetPath, v23, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
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
    this->klass = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)this, 0, v2, v3);
    goto LABEL_32;
  }
  v28 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v28, 0);
  v4->fields.__2__current = (Il2CppObject *)v28;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C36FFC(p__2__current, (int32_t)v28, v30, v31);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ServantAssetLoadManager__GetAheadBg_d__159_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C421BE & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager___c_TypeInfo);
    byte_4C421BE = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantAssetLoadManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
  const MethodInfo *v3; // x3
  struct ServantAssetLoadManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  _4__this->fields.nobleSequenceData = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.nobleSequenceData, (int32_t)data, (int32_t)method, v3);
  this->fields.isNext = 1;
}


void ServantAssetLoadManager___c__DisplayClass157_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char *_4__this; // x0
  Il2CppObject *AssetObject_object; // x20
  Il2CppObject *v8; // x0
  struct UnityEngine_GameObject_o **p_sequence; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x21
  UnityEngine_Transform_o *v15; // x21
  const MethodInfo *v16; // x3
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v18; // x21
  ServantAssetLoadManager_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_IEnumerator_o *AheadBg; // x1

  if ( (byte_4C421BF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C37058(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__2__);
    sub_1C37058(&StringLiteral_4422/*"ChrSequence1"*/);
    byte_4C421BF = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  *((_QWORD *)_4__this + 14) = assetData;
  sub_1C36FFC((CGThumbnailListItem_o *)(_4__this + 112), (int32_t)assetData, (int32_t)method, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         (ServantAssetLoadManager_o *)_4__this,
                         this->fields.sequencePath,
                         (System_String_o *)StringLiteral_4422/*"ChrSequence1"*/,
                         (const MethodInfo_318EC58 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         AssetObject_object,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = (struct UnityEngine_GameObject_o *)v8;
  p_sequence = &this->fields.sequence;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sequence, (int32_t)v8, v10, v11);
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
  v12 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (char *)UnityEngine_GameObject__get_transform(this->fields.parent, 0);
  if ( !v12 )
    goto LABEL_28;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)_4__this, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v13 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4C3C921 )
  {
    _4__this = (char *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v14 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4C3C929 )
  {
    _4__this = (char *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C929 = 1;
  }
  if ( !v14 )
    goto LABEL_28;
  UnityEngine_Transform__set_eulerAngles(v14, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v15 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4C3C926 )
  {
    _4__this = (char *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v15 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v18 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v19 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v20, v21);
  }
  if ( !v19 )
LABEL_28:
    sub_1C372B4(_4__this);
  AheadBg = ServantAssetLoadManager__GetAheadBg(v19, v18, _9__2, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)v19, AheadBg, 0);
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
  const MethodInfo *v3; // x3
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *v4; // x19
  struct ServantAssetLoadManager_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o **p__8__1; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ServantAssetLoadManager_o *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct UnityEngine_GameObject_o *parent; // x1
  const MethodInfo *v16; // x1
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v17; // x20
  System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v27; // x22
  System_String_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *nobleDataPath_5__2; // x22
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v36; // x22
  System_String_o *v37; // x20
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v39; // x8
  _BOOL4 isNext; // w20
  struct ServantAssetLoadManager_o **p__4__this; // x0
  System_String_o *v42; // x21
  Il2CppObject *v43; // x23
  AssetLoader_LoadEndDataHandler_o *v44; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v45; // x8
  UnityEngine_Object_o *sequence; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_List_int__o *v49; // x21
  System_Int32_array *funcId; // x21
  int v51; // w21
  const MethodInfo *v52; // x2
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v53; // x8
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *v55; // x21
  __int64 v56; // x22
  const MethodInfo *v57; // x2
  ServantAssetLoadManager_c *v58; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int v60; // w8
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v61; // x8
  struct ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x9
  bool result; // w0
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  int32_t _1__state; // [xsp+1Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4C421C1 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&BattleSequenceManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__0__);
    sub_1C37058(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__1__);
    sub_1C37058(&ServantAssetLoadManager___c__DisplayClass157_0_TypeInfo);
    sub_1C37058(&StringLiteral_9515/*"NoblePhantasm/"*/);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)sub_1C37058(&StringLiteral_9517/*"NoblePhantasm/Sequence/"*/);
    byte_4C421C1 = 1;
  }
  _1__state = 0;
  entity = 0;
  effectIdList = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C372A4(ServantAssetLoadManager___c__DisplayClass157_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass157_0_o *)v6;
      p__8__1 = &v4->fields.__8__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      v12 = v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v12;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v12, v10, v11);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      parent = v4->fields.parent;
      *(_QWORD *)&this->fields.svtId = parent;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtId, (int32_t)parent, v13, v14);
      if ( !*p__8__1 )
        goto LABEL_79;
      (*p__8__1)->fields.isNext = 0;
      if ( !_4__this )
        goto LABEL_79;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, v16);
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)BattleSequenceManager__SafeGetExecutingTdInfo(0);
      if ( !this )
        goto LABEL_79;
      _1__state = this->fields.__1__state;
      v17 = *p__8__1;
      v18 = System_Int32__ToString((int32_t)&_1__state, 0);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_String__Concat_63561656(
                                                                               (System_String_o *)StringLiteral_9517/*"NoblePhantasm/Sequence/"*/,
                                                                               v18,
                                                                               0);
      if ( !v17 )
        goto LABEL_79;
      v17->fields.sequencePath = (struct System_String_o *)this;
      sub_1C36FFC((CGThumbnailListItem_o *)&v17->fields.sequencePath, (int32_t)this, v19, v20);
      v21 = System_Int32__ToString((int32_t)&_1__state, 0);
      v22 = System_String__Concat_63561656((System_String_o *)StringLiteral_9515/*"NoblePhantasm/"*/, v21, 0);
      v4->fields._nobleDataPath_5__2 = v22;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._nobleDataPath_5__2, (int32_t)v22, v23, v24);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_79;
      sequencePath = _8__1->fields.sequencePath;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(sequencePath, 0) )
        goto LABEL_18;
      v27 = v4->fields.__8__1;
      v28 = System_Int32__ToString((int)v4 + 48, 0);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_String__Concat_63561656(
                                                                               (System_String_o *)StringLiteral_9517/*"NoblePhantasm/Sequence/"*/,
                                                                               v28,
                                                                               0);
      if ( !v27 )
        goto LABEL_79;
      v27->fields.sequencePath = (struct System_String_o *)this;
      sub_1C36FFC((CGThumbnailListItem_o *)&v27->fields.sequencePath, (int32_t)this, v29, v30);
LABEL_18:
      nobleDataPath_5__2 = v4->fields._nobleDataPath_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__isExistAssetStorage(
                                                                               nobleDataPath_5__2,
                                                                               0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v32 = System_Int32__ToString((int)v4 + 48, 0);
        v33 = System_String__Concat_63561656((System_String_o *)StringLiteral_9515/*"NoblePhantasm/"*/, v32, 0);
        v4->fields._nobleDataPath_5__2 = v33;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._nobleDataPath_5__2, (int32_t)v33, v34, v35);
      }
      v36 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_79;
      v36->fields.isNext = 0;
      v37 = v36->fields.sequencePath;
      v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v38,
        (Il2CppObject *)v36,
        Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__0__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__loadAssetStorage(
                                                                               v37,
                                                                               v38,
                                                                               1,
                                                                               0);
LABEL_27:
      v39 = v4->fields.__8__1;
      if ( !v39 )
        goto LABEL_79;
      isNext = v39->fields.isNext;
      v4->fields.__2__current = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v2, v3);
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
      this->fields.__4__this = 0;
      p__4__this = &this->fields.__4__this;
      *((_BYTE *)p__4__this - 8) = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)p__4__this, 0, v2, v3);
      v42 = v4->fields._nobleDataPath_5__2;
      v43 = (Il2CppObject *)v4->fields.__8__1;
      v44 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v44,
        v43,
        Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__1__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__loadAssetStorage(
                                                                               v42,
                                                                               v44,
                                                                               1,
                                                                               0);
LABEL_35:
      v45 = v4->fields.__8__1;
      if ( !v45 )
        goto LABEL_79;
      if ( v45->fields.isNext )
      {
        sequence = (UnityEngine_Object_o *)v45->fields.sequence;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(sequence, 0, 0) )
        {
LABEL_69:
          v4->fields.__2__current = 0;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C36FFC(p__2__current, 0, v47, v48);
          v60 = 5;
          goto LABEL_75;
        }
        v49 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v49,
          (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v49;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)DataManager__GetMasterData_object_(
                                                                                   (DataManager_o *)this,
                                                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          if ( this )
          {
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                     (TreasureDvcLvMaster_o *)this,
                                                                                     &entity,
                                                                                     v4->fields.treasureDvcId,
                                                                                     v4->fields.treasureDvcLv,
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
                v51 = (int)this;
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)sub_1C37100(int___TypeInfo, 1);
                if ( !this )
                  goto LABEL_79;
                if ( !LODWORD(this->fields.__2__current) )
                  goto LABEL_80;
                LODWORD(this->fields.__4__this) = v51;
                if ( !_4__this )
                  goto LABEL_79;
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                         _4__this,
                                                                                         (System_Int32_array *)this,
                                                                                         v52);
              }
            }
            v53 = v4->fields.__8__1;
            if ( v53 )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v53->fields.sequence;
              if ( this )
              {
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                                                                         (UnityEngine_GameObject_o *)this,
                                                                                         (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
                if ( this )
                {
                  _2__current = (int)this->fields.__2__current;
                  v55 = this;
                  if ( _2__current >= 1 )
                  {
                    v56 = 0;
                    while ( (unsigned int)v56 < _2__current )
                    {
                      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)*((_QWORD *)&v55->fields.__4__this
                                                                                             + v56);
                      if ( !this )
                        goto LABEL_79;
                      WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                        (WellFired_USFGOActorBattleActionEvent_o *)this,
                        &effectIdList,
                        0);
                      _2__current = (int)v55->fields.__2__current;
                      if ( (int)++v56 >= _2__current )
                        goto LABEL_60;
                    }
LABEL_80:
                    sub_1C372BC(this);
                  }
                }
LABEL_60:
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)effectIdList;
                if ( effectIdList )
                {
                  this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_Collections_Generic_List_int___ToArray(
                                                                                           effectIdList,
                                                                                           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( _4__this )
                  {
                    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                             _4__this,
                                                                                             (System_Int32_array *)this,
                                                                                             v57);
                    if ( _4__this->fields.nobleEffectList )
                    {
                      System_Collections_Generic_List_object___AddRange(
                        (System_Collections_Generic_List_object__o *)_4__this->fields.nobleEffectList,
                        (System_Collections_Generic_IEnumerable_T__o *)this,
                        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_65:
                      v58 = ServantAssetLoadManager_TypeInfo;
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                      if ( ServantAssetLoadManager__checkLoad((const MethodInfo *)v58) )
                      {
                        v4->fields.__2__current = 0;
                        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                        sub_1C36FFC(p__2__current, 0, v47, v48);
                        v60 = 4;
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
        sub_1C372B4(this);
      }
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(p__2__current, 0, v2, v3);
      v60 = 3;
LABEL_75:
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v60;
      return 1;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_35;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_65;
    case 5:
      v61 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v61 )
        goto LABEL_79;
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_79;
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        v61->fields.sequence,
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7B404;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A7B3E4;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7B39C;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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