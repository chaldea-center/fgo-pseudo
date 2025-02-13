void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  void *v9; // x1
  struct ServantAssetLoadManager_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDB7F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB7F5 = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->unloadIgnoredAssetArgs, (int64_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  v10 = ServantAssetLoadManager_TypeInfo->static_fields;
  v10->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->wkSpace, (int64_t)v9, v11, v12, v13, v14, v15, v16);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_Dictionary_int__object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_Dictionary_object__object__o *v52; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4BDB7F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__Object__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
    byte_4BDB7F4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loadedList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loadlist, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.downloadlist, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.ActorVoice, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.LastActorVoice, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bgAssetDataList, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nobleEffectList, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v52 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__Object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v52,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v52;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._releaseAssets, (int64_t)v52, v53, v54, v55, v56, v57, v58);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_4BDB7EE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4BDB7EE = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    sub_1C22094(0LL, path);
  return System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           (Il2CppObject *)path,
           (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
}


void __fastcall ServantAssetLoadManager__DebugPrint(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (ServantAssetLoadManager_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_1C22094(this, data);
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BDB785 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB785 = 1;
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
  System_Collections_Generic_Dictionary_object__object__o *Instance; // x0
  __int64 v4; // x1
  ServantAssetLoadManager_c *v5; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  ServantAssetArgs_o *currentValue; // x19
  int32_t v9; // w24
  ServantAssetLoadManager_c *v10; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDB7ED & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
    byte_4BDB7ED = 1;
  }
  memset(&v12, 0, sizeof(v12));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
                                                                          (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v12,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v6 )
      break;
    currentValue = (ServantAssetArgs_o *)v12.fields._currentValue;
    if ( !v12.fields._currentValue )
      sub_1C22094(v6, v7);
    if ( SHIDWORD(v12.fields._currentValue[5].monitor) >= 1 )
    {
      v9 = 0;
      do
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v7);
        ++v9;
      }
      while ( v9 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v10 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v10 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v10->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_22:
    sub_1C22094(Instance, v4);
  System_Collections_Generic_Dictionary_object__object___Clear(
    Instance,
    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
}


bool __fastcall ServantAssetLoadManager__ExistPreloadBattleActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_4BDB79D & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB79D = 1;
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

  if ( (byte_4BDB7CE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v10);
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
  int32_t VoicePrefix; // w24
  const MethodInfo *v12; // x3
  int32_t VoiceId; // w0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t v17; // w9
  Il2CppObject *v18; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v20; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  int32_t v26; // [xsp+8h] [xbp-68h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDB7CF & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&Voice_TypeInfo);
    sub_1C21E38(&StringLiteral_25387/*"{0:D0}_{1}"*/);
    sub_1C21E38(&StringLiteral_12907/*"Servants_"*/);
    byte_4BDB7CF = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v12);
  if ( overwriteSvtVoiceId )
    v17 = overwriteSvtVoiceId;
  else
    v17 = VoiceId;
  v26 = VoicePrefix;
  v27 = v17;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v14, v15, v16);
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0LL);
  v20 = System_String__Format_63129848((System_String_o *)StringLiteral_25387/*"{0:D0}_{1}"*/, v18, FileName, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v22 = System_Int32__ToString((int32_t)&v27, 0LL);
  v23 = System_String__Concat_63115476((System_String_o *)StringLiteral_12907/*"Servants_"*/, v22, 0LL);
  if ( !Instance )
    sub_1C22094(v23, v24);
  return SoundManager__IsExistsSound((SoundManager_o *)Instance, v23, v20, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BDB7D9 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager__GetAheadBg_d__158_TypeInfo);
    byte_4BDB7D9 = 1;
  }
  v7 = sub_1C22084(ServantAssetLoadManager__GetAheadBg_d__158_TypeInfo);
  ServantAssetLoadManager__GetAheadBg_d__158___ctor((ServantAssetLoadManager__GetAheadBg_d__158_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)bgList, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB7EB & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_4710/*"CommandCodes/Texture/"*/);
    byte_4BDB7EB = 1;
  }
  v8 = commandCodeId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_4710/*"CommandCodes/Texture/"*/, v6, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BDB7D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal((ServantAssetLoadManager_o *)Instance, uniqueId, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v7; // x0

  if ( (byte_4BDB7D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB7D3 = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                  (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_10:
    sub_1C22094(LastActorVoice, *(_QWORD *)&uniqueId);
  }
  v7 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v7 = ServantAssetLoadManager_TypeInfo;
  }
  return v7->static_fields->wkSpace;
}


int32_t __fastcall ServantAssetLoadManager__GetLimitImageIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitDiff,
        const MethodInfo *method)
{
  if ( (byte_4BDB768 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB768 = 1;
  }
  if ( limitCount <= 10 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL) + limitDiff;
  }
  return limitCount;
}


int32_t __fastcall ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4BDB7EF & 1) == 0 )
  {
    sub_1C21E38(&System_IO_Path_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
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


System_String_o *__fastcall ServantAssetLoadManager__GetPrefixVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDB7CB & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25387/*"{0:D0}_{1}"*/);
    byte_4BDB7CB = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix, v9, v10, v11);
  return System_String__Format_63129848((System_String_o *)StringLiteral_25387/*"{0:D0}_{1}"*/, v12, (Il2CppObject *)voiceId, 0LL);
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

  if ( (byte_4BDB79C & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB79C = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( appearanceId < 1 )
  {
    v10 = svtId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_39181844(v10, *(const MethodInfo **)&svtId);
  }
  else
  {
    v10 = appearanceId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_39181844(v10, *(const MethodInfo **)&svtId);
  }
  return ServantAssetLoadManager__getActorFolderName(v10, limitCount, *(const MethodInfo **)&limitCount);
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceChocoShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ServantAssetLoadManager___c_c *v3; // x0
  System_Func_T1__T2__TResult__o *_9__98_0; // x20
  Il2CppObject *v5; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Object_array *ComponentsInChildren_object__50336088; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  Il2CppObject *v16; // x19

  if ( (byte_4BDB7A6 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleServantDeadComponent_getReplaceChocoShader__);
    sub_1C21E38(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__98_0__);
    sub_1C21E38(&ServantAssetLoadManager___c_TypeInfo);
    byte_4BDB7A6 = 1;
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
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v5,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__98_0__,
      0LL);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__98_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__98_0, (int64_t)_9__98_0, v7, v8, v9, v10, v11, v12);
  }
  if ( !obj )
    sub_1C22094(v3, method);
  ComponentsInChildren_object__50336088 = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                            obj,
                                            (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__50336088
    && (v15 = *(_QWORD *)&ComponentsInChildren_object__50336088->max_length) != 0 )
  {
    if ( !(_DWORD)v15 )
      sub_1C2209C(ComponentsInChildren_object__50336088, v14);
    v16 = ComponentsInChildren_object__50336088->m_Items[0];
  }
  else
  {
    v16 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
  {
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v16,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      0LL);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__98_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ServantAssetLoadManager___c_c *v3; // x0
  System_Func_T1__T2__TResult__o *_9__97_0; // x20
  Il2CppObject *v5; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Object_array *ComponentsInChildren_object__50336088; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  Il2CppObject *v16; // x19

  if ( (byte_4BDB7A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleServantDeadComponent_getReplaceDeadShader__);
    sub_1C21E38(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__97_0__);
    sub_1C21E38(&ServantAssetLoadManager___c_TypeInfo);
    byte_4BDB7A5 = 1;
  }
  v3 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v3 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__97_0 = (System_Func_T1__T2__TResult__o *)v3->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ServantAssetLoadManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__97_0 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__97_0,
      v5,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__97_0__,
      0LL);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__97_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__97_0, (int64_t)_9__97_0, v7, v8, v9, v10, v11, v12);
  }
  if ( !obj )
    sub_1C22094(v3, method);
  ComponentsInChildren_object__50336088 = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                            obj,
                                            (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__50336088
    && (v15 = *(_QWORD *)&ComponentsInChildren_object__50336088->max_length) != 0 )
  {
    if ( !(_DWORD)v15 )
      sub_1C2209C(ComponentsInChildren_object__50336088, v14);
    v16 = ComponentsInChildren_object__50336088->m_Items[0];
  }
  else
  {
    v16 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
  {
    _9__97_0 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__97_0,
      v16,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      0LL);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__97_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  v2 = data;
  if ( (byte_4BDB78A & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB78A = 1;
  }
  if ( !v2 )
    sub_1C22094(data, method);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  Il2CppClass *v6; // x19
  Il2CppClass *element_class; // x8

  if ( (byte_4BDB7EC & 1) == 0 )
  {
    sub_1C21E38(&BattleRootComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&StringLiteral_6559/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/);
    byte_4BDB7EC = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6559/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  klass = Instance[2].klass;
  if ( klass
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)methodPtr_low) )
  {
    if ( *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
      v6 = Instance[2].klass;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v6 || (element_class = v6->_1.element_class) == 0LL )
LABEL_21:
    sub_1C22094(Instance, v3);
  return BYTE4(element_class->vtable[25].methodPtr);
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDB7D6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)Instance[5].klass;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)Instance,
         uniqueId,
         (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)Instance[5].klass;
      if ( Instance )
      {
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                     uniqueId,
                     (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance[2].monitor) != 0;
      }
    }
LABEL_11:
    sub_1C22094(Instance, v4);
  }
  return 1;
}


void __fastcall ServantAssetLoadManager__LoadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *AheadBg; // x1

  AheadBg = ServantAssetLoadManager__GetAheadBg(this, bgList, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
}


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

  if ( (byte_4BDB7D7 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v14);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884(v17, Manager__loadNoblePhantasmCoroutine, 0LL);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__LoadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDB7AC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
  return ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           treasureDeviceId,
           limit,
           name,
           v9);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
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

  if ( (byte_4BDB7AD & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleSequenceManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C21E38(&StringLiteral_9695/*"NoblePhantasm/"*/);
    byte_4BDB7AD = 1;
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
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !ExecutingTdInfo )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          ExecutingTdInfo,
          &entity,
          treasureDeviceId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
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
    sub_1C22094(ExecutingTdInfo, v10);
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
  v12 = System_Int32__ToString((int32_t)&MasterKind_k__BackingField, 0LL);
  v13 = System_String__Concat_63115476((System_String_o *)StringLiteral_9695/*"NoblePhantasm/"*/, v12, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v13, 0LL) )
  {
    groupSeqId = 10 * (MasterKind_k__BackingField / 10);
    v14 = System_Int32__ToString((int32_t)&groupSeqId, 0LL);
    v13 = System_String__Concat_63115476((System_String_o *)StringLiteral_9695/*"NoblePhantasm/"*/, v14, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v13,
                                       name,
                                       (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void __fastcall ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x20
  int32_t v15; // w21

  if ( (byte_4BDB784 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB784 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
LABEL_24:
    sub_1C22094(Item, v6);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v7);
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
      v8);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v7);
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v13);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v15 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v15,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v15,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Item->klass->vtable[8].method)(
          Item,
          dlOnly,
          Item->klass->vtable[9].methodPtr);
      }
      ++v15;
    }
    while ( v15 < skillList_k__BackingField->fields._size );
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

  if ( (byte_4BDB7A2 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB7A2 = 1;
  }
  effectPath = 0LL;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, (const MethodInfo *)dlOnly) )
    ServantAssetLoadManager__setLoadList(this, effectPath, dlOnly, v7);
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

  if ( (byte_4BDB7D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  ServantAssetLoadManager__localStopVoice((ServantAssetLoadManager_o *)Instance, uniqueId, fadeoutTime, v7);
}


bool __fastcall ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(
        ServantAssetArgs_o *args,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  BattleDeckServantData_o *deckSvt_k__BackingField; // x8
  int32_t DisplayType_k__BackingField; // w20
  NpcServantDisplayTypeDetailMaster_o *v14; // x21
  char BattleCommonEffectPath; // w0
  int32_t effectId; // w20
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDB7A4 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDB7A4 = 1;
  }
  entity = 0LL;
  *effectPath = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)effectPath, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !args || !args->fields._deckSvt_k__BackingField )
    goto LABEL_11;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
  deckSvt_k__BackingField = args->fields._deckSvt_k__BackingField;
  if ( !deckSvt_k__BackingField )
    goto LABEL_17;
  DisplayType_k__BackingField = args->fields._DisplayType_k__BackingField;
  v14 = (NpcServantDisplayTypeDetailMaster_o *)Master_object;
  Master_object = (Il2CppObject *)BattleDeckServantData__GetDisplayColorType(deckSvt_k__BackingField, 0LL);
  if ( !v14 )
    goto LABEL_17;
  NpcServantDisplayTypeDetailMaster__TryGetEntity(
    v14,
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
    sub_1C22094(Master_object, v11);
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
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  bool IsKeepAssetAvailable; // w20
  System_Collections_Generic_Dictionary_object__object__o *v6; // x21
  ServantAssetLoadManager_c *v7; // x0
  System_Collections_Generic_Dictionary_object__object__o *unloadIgnoredAssetArgs; // x21
  ServantAssetLoadManager_c *v9; // x0
  System_Collections_Generic_Dictionary_object__object__o *v10; // x21

  if ( (byte_4BDB787 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB787 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
      v6 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(_QWORD *)&Instance[1].fields.m_CachedPtr + 8LL);
      Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
      if ( v6 )
      {
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v6,
                (Il2CppObject *)Instance,
                (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v7 = ServantAssetLoadManager_TypeInfo;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v7 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_object__object__o *)v7->static_fields->unloadIgnoredAssetArgs;
          Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_20;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            unloadIgnoredAssetArgs,
            (Il2CppObject *)Instance,
            (Il2CppObject *)args,
            (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v9 = ServantAssetLoadManager_TypeInfo;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v9 = ServantAssetLoadManager_TypeInfo;
        }
        v10 = (System_Collections_Generic_Dictionary_object__object__o *)v9->static_fields->unloadIgnoredAssetArgs;
        Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
        if ( v10 )
        {
          Instance = (ServantAssetLoadManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    v10,
                                                    (Il2CppObject *)Instance,
                                                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++HIDWORD(Instance->fields.LastActorVoice);
            return IsKeepAssetAvailable;
          }
        }
      }
    }
LABEL_20:
    sub_1C22094(Instance, v4);
  }
  return IsKeepAssetAvailable;
}


void __fastcall ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4BDB7DB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__);
    byte_4BDB7DB = 1;
  }
  memset(&v4, 0, sizeof(v4));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_1C22094(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
    (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v4.fields._current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void __fastcall ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x19
  int32_t v12; // w20

  if ( (byte_4BDB786 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB786 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
LABEL_24:
    sub_1C22094(Item, v4);
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
    v12 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v12,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v12,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[9].method)(
          Item,
          Item->klass->vtable[10].methodPtr);
      }
      ++v12;
    }
    while ( v12 < skillList_k__BackingField->fields._size );
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
  if ( (byte_4BDB7EA & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB7EA = 1;
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
          sub_1C2209C(this, commandCodeIds);
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

  if ( (byte_4BDB7A3 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB7A3 = 1;
  }
  effectPath = 0LL;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, method) )
    ServantAssetLoadManager__unloadTargetPathAssetLocal(this, effectPath, v5);
}


void __fastcall ServantAssetLoadManager___GetAheadBg_b__158_0(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *bgAssetDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BDB7F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4BDB7F6 = 1;
  }
  bgAssetDataList = (System_Collections_Generic_List_object__o *)this->fields.bgAssetDataList;
  if ( !bgAssetDataList
    || (items = bgAssetDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++bgAssetDataList->fields._version,
        !items) )
  {
    sub_1C22094(bgAssetDataList, data);
  }
  size = bgAssetDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgAssetDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    bgAssetDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  int v27; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v33; // s8
  float v34; // s9
  float v35; // s10
  float v36; // s8
  float v37; // s9
  float v38; // s10
  float v39; // s8
  UnityEngine_GameObject_o *v40; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v44; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v45; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_4BDB7A8 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16451/*"_ClipSharpnessY"*/);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_21327/*"joint_all_Base"*/);
    sub_1C21E38(&StringLiteral_16436/*"_ChocoTex"*/);
    sub_1C21E38(&StringLiteral_25110/*"weapon"*/);
    sub_1C21E38(&StringLiteral_12985/*"Shaders/ChocoMap"*/);
    sub_1C21E38(&StringLiteral_16671/*"_Use_alphawidth"*/);
    sub_1C21E38(&StringLiteral_5056/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/);
    sub_1C21E38(&StringLiteral_17643/*"body"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDB7A8 = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                      v2,
                                      (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)klass )
      goto LABEL_54;
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v4[1].klass;
    if ( (__int64)++v5 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v6 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0LL);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_70735792(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16455/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0LL);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16455/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0LL);
  if ( !obj )
LABEL_53:
    sub_1C22094(obj, method);
  if ( UnityEngine_Material__HasProperty_70735792(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16411/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0LL);
    if ( obj )
    {
      v51 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, 0LL);
      v9 = v51.fields.r;
      v8 = v51.fields.g;
      v7 = v51.fields.b;
      a = v51.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
LABEL_13:
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5056/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
             (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(v2, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_21327/*"joint_all_Base"*/, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v15);
  v17 = v4[1].klass;
  if ( (int)v17 >= 1 )
  {
    v18 = obj;
    v19 = 0LL;
    v40 = v4;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_54;
      v20 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v19);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v20 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v20, 0LL);
        if ( !obj )
          goto LABEL_53;
        v21 = (int)obj[1].klass;
        v22 = obj;
        if ( v21 >= 1 )
          break;
      }
LABEL_41:
      v4 = v40;
      ++v19;
      LODWORD(v17) = v40[1].klass;
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
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v24[4], 0LL);
      if ( !v18 )
        goto LABEL_53;
      v26 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(_QWORD, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))v18[1].klass)(
                                      *(_QWORD *)&v18[2].fields.m_CachedPtr,
                                      obj,
                                      v12,
                                      *(_QWORD *)&v18[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v25, v26, 0LL);
      v48.fields.b = b;
      v48.fields.a = value;
      v48.fields.r = r;
      v48.fields.g = g;
      UnityEngine_Material__SetColor(v25, (System_String_o *)StringLiteral_16455/*"_Color"*/, v48, 0LL);
      v49.fields.a = a;
      v49.fields.r = v9;
      v49.fields.g = v8;
      v49.fields.b = v7;
      UnityEngine_Material__SetColor(v25, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v49, 0LL);
      UnityEngine_Material__SetTexture(
        v25,
        (System_String_o *)StringLiteral_16436/*"_ChocoTex"*/,
        (UnityEngine_Texture_o *)object,
        0LL);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17643/*"body"*/, 0LL) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_25110/*"weapon"*/, 0LL) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v20,
                                            0LL);
        if ( !obj )
          goto LABEL_53;
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0LL);
        if ( !NodeFromName )
          goto LABEL_53;
        v46 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v27, 0LL);
        x = v46.fields.x;
        y = v46.fields.y;
        z = v46.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v33 = x - localPosition.fields.x;
        v34 = y - localPosition.fields.y;
        v35 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v45, (UnityEngine_Renderer_o *)v20, 0LL);
        v36 = v33 + v45.fields.m_Center.fields.x;
        v37 = v34 + v45.fields.m_Center.fields.y;
        v38 = v35 + v45.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v45, (UnityEngine_Renderer_o *)v20, 0LL);
        v44.fields.m_Center.fields.x = v36;
        v44.fields.m_Center.fields.y = v37;
        v44.fields.m_Center.fields.z = v38;
        *(float32x2_t *)&v44.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v45.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v45.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v44.fields.m_Extents.fields.z = (float)(v45.fields.m_Extents.fields.z + v45.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v20, &v44, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v20, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v45, (UnityEngine_Renderer_o *)v20, 0LL);
        v39 = v45.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v45, (UnityEngine_Renderer_o *)v20, 0LL);
        UnityEngine_Material__SetFloat(
          v25,
          (System_String_o *)StringLiteral_16451/*"_ClipSharpnessY"*/,
          v39 - v45.fields.m_Extents.fields.y,
          0LL);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_70735792(
                                          v25,
                                          (System_String_o *)StringLiteral_16671/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v25, (System_String_o *)StringLiteral_16671/*"_Use_alphawidth"*/, 1.0, 0LL);
      v21 = (int)v22[1].klass;
      if ( (int)++v23 >= v21 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1C2209C(obj, method);
  }
}


void __fastcall ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
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
  if ( (byte_4BDB7A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_16436/*"_ChocoTex"*/);
    sub_1C21E38(&StringLiteral_5055/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_1C21E38(&StringLiteral_12985/*"Shaders/ChocoMap"*/);
    sub_1C21E38(&StringLiteral_16671/*"_Use_alphawidth"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDB7A9 = 1;
  }
  if ( !v2 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                      v2,
                                      (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)klass )
      goto LABEL_45;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v4[1].klass;
    if ( (__int64)++v7 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v8 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0LL);
  if ( !obj )
    goto LABEL_44;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( UnityEngine_Material__HasProperty_70735792(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16455/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0LL);
    if ( !obj )
      goto LABEL_44;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16455/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0LL);
  if ( !obj )
LABEL_44:
    sub_1C22094(obj, method);
  if ( UnityEngine_Material__HasProperty_70735792(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16411/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0LL);
    if ( !obj )
      goto LABEL_44;
    v33 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, 0LL);
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
  v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5055/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
             (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(v2, v16);
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                      v2,
                                      (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  v19 = obj[1].klass;
  v20 = obj;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
        goto LABEL_45;
      v22 = v20;
      v23 = (UnityEngine_Object_o *)*((_QWORD *)&v20[1].monitor + v21);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_44;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v23, 0LL);
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
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v27[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_44;
      v29 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))ReplaceChocoShaderFunc->fields.m_target)(
                                      ReplaceChocoShaderFunc->fields.original_method_info,
                                      obj,
                                      v15,
                                      *(_QWORD *)&ReplaceChocoShaderFunc->fields.extra_arg);
      UnityEngine_Material__set_shader(v28, v29, 0LL);
      v30.fields.r = r;
      v30.fields.g = g;
      v30.fields.b = b;
      v30.fields.a = a;
      UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16455/*"_Color"*/, v30, 0LL);
      v31.fields.r = v6;
      v31.fields.g = v9;
      v31.fields.b = v10;
      v31.fields.a = v11;
      UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v31, 0LL);
      UnityEngine_Material__SetTexture(
        v28,
        (System_String_o *)StringLiteral_16436/*"_ChocoTex"*/,
        (UnityEngine_Texture_o *)object,
        0LL);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_70735792(
                                          v28,
                                          (System_String_o *)StringLiteral_16671/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v28, (System_String_o *)StringLiteral_16671/*"_Use_alphawidth"*/, 1.0, 0LL);
      v24 = (int)v25[1].klass;
      if ( (int)++v26 >= v24 )
        goto LABEL_32;
    }
LABEL_45:
    sub_1C2209C(obj, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
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
  int v26; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v32; // s8
  float v33; // s9
  float v34; // s10
  float v35; // s8
  float v36; // s9
  float v37; // s10
  float v38; // s8
  UnityEngine_GameObject_o *v39; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v43; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v44; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_4BDB7A7 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16451/*"_ClipSharpnessY"*/);
    sub_1C21E38(&StringLiteral_5054/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_21327/*"joint_all_Base"*/);
    sub_1C21E38(&StringLiteral_25110/*"weapon"*/);
    sub_1C21E38(&StringLiteral_16671/*"_Use_alphawidth"*/);
    sub_1C21E38(&StringLiteral_17643/*"body"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDB7A7 = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                      v2,
                                      (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)klass )
      goto LABEL_54;
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v4[1].klass;
    if ( (__int64)++v5 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v6 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0LL);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_70735792(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16455/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0LL);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16455/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0LL);
  if ( !obj )
LABEL_53:
    sub_1C22094(obj, method);
  if ( UnityEngine_Material__HasProperty_70735792(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16411/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0LL);
    if ( obj )
    {
      v50 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, 0LL);
      v9 = v50.fields.r;
      v8 = v50.fields.g;
      v7 = v50.fields.b;
      a = v50.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
LABEL_13:
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5054/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(v2, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_21327/*"joint_all_Base"*/, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v14);
  v16 = v4[1].klass;
  if ( (int)v16 >= 1 )
  {
    v17 = obj;
    v18 = 0LL;
    v39 = v4;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_54;
      v19 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v19 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v19, 0LL);
        if ( !obj )
          goto LABEL_53;
        v20 = (int)obj[1].klass;
        v21 = obj;
        if ( v20 >= 1 )
          break;
      }
LABEL_41:
      v4 = v39;
      ++v18;
      LODWORD(v16) = v39[1].klass;
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
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v23[4], 0LL);
      if ( !v17 )
        goto LABEL_53;
      v25 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(_QWORD, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))v17[1].klass)(
                                      *(_QWORD *)&v17[2].fields.m_CachedPtr,
                                      obj,
                                      v12,
                                      *(_QWORD *)&v17[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v24, v25, 0LL);
      v47.fields.b = b;
      v47.fields.a = value;
      v47.fields.r = r;
      v47.fields.g = g;
      UnityEngine_Material__SetColor(v24, (System_String_o *)StringLiteral_16455/*"_Color"*/, v47, 0LL);
      v48.fields.a = a;
      v48.fields.r = v9;
      v48.fields.g = v8;
      v48.fields.b = v7;
      UnityEngine_Material__SetColor(v24, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v48, 0LL);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17643/*"body"*/, 0LL) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_25110/*"weapon"*/, 0LL) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v19,
                                            0LL);
        if ( !obj )
          goto LABEL_53;
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0LL);
        if ( !NodeFromName )
          goto LABEL_53;
        v45 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v26, 0LL);
        x = v45.fields.x;
        y = v45.fields.y;
        z = v45.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v32 = x - localPosition.fields.x;
        v33 = y - localPosition.fields.y;
        v34 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v44, (UnityEngine_Renderer_o *)v19, 0LL);
        v35 = v32 + v44.fields.m_Center.fields.x;
        v36 = v33 + v44.fields.m_Center.fields.y;
        v37 = v34 + v44.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v44, (UnityEngine_Renderer_o *)v19, 0LL);
        v43.fields.m_Center.fields.x = v35;
        v43.fields.m_Center.fields.y = v36;
        v43.fields.m_Center.fields.z = v37;
        *(float32x2_t *)&v43.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v44.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v44.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v43.fields.m_Extents.fields.z = (float)(v44.fields.m_Extents.fields.z + v44.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v19, &v43, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v19, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v44, (UnityEngine_Renderer_o *)v19, 0LL);
        v38 = v44.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v44, (UnityEngine_Renderer_o *)v19, 0LL);
        UnityEngine_Material__SetFloat(
          v24,
          (System_String_o *)StringLiteral_16451/*"_ClipSharpnessY"*/,
          v38 - v44.fields.m_Extents.fields.y,
          0LL);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_70735792(
                                          v24,
                                          (System_String_o *)StringLiteral_16671/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v24, (System_String_o *)StringLiteral_16671/*"_Use_alphawidth"*/, 1.0, 0LL);
      v20 = (int)v21[1].klass;
      if ( (int)++v22 >= v20 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1C2209C(obj, method);
  }
}


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

  if ( (byte_4BDB7D0 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v12);
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
  ServantEntity_o *SvtEntity; // x25
  const MethodInfo *v14; // x3
  int32_t VoicePrefix; // w26
  const MethodInfo *v16; // x3
  int32_t VoiceId; // w0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w9
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 *v24; // x8
  System_String_o *v25; // x20
  System_String_o *v26; // x19
  System_String_o *v27; // x0
  System_String_o *v28; // x19
  int32_t v31; // [xsp+8h] [xbp-58h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BDB7D1 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9699/*"NoblePhantasm_"*/);
    sub_1C21E38(&StringLiteral_25387/*"{0:D0}_{1}"*/);
    sub_1C21E38(&StringLiteral_12907/*"Servants_"*/);
    byte_4BDB7D1 = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v14);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v21 = overwriteSvtVoiceId;
  else
    v21 = VoiceId;
  v31 = VoicePrefix;
  v32 = v21;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v18, v19, v20);
  v23 = System_String__Format_63129848((System_String_o *)StringLiteral_25387/*"{0:D0}_{1}"*/, v22, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v24 = &StringLiteral_9699/*"NoblePhantasm_"*/;
    v25 = v23;
    if ( !isNp )
      v24 = &StringLiteral_12907/*"Servants_"*/;
    v26 = (System_String_o *)*v24;
    v27 = System_Int32__ToString((int32_t)&v32, 0LL);
    v28 = System_String__Concat_63115476(v26, v27, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    return SoundManager__checkServantVoice(v28, v25, 0, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantAssetLoadManager__checkLoad(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4BDB77F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB77F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return ServantAssetLoadManager__checkLoadlocal((ServantAssetLoadManager_o *)Instance, v2);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_4BDB780 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4BDB780 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_1C22094(this, method);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v2->fields.soundCount > 0;
}


void __fastcall ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  Il2CppObject *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BDB769 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB769 = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = (struct ServantMaster_o *)MasterData_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.svtmaster,
      (int64_t)MasterData_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v12 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = (struct ServantLimitMaster_o *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.svtlimitmaster, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (PartyOrganizationUtility_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C22094(Instance, v4);
  v21 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (PartyOrganizationUtility_c *)v21;
  sub_1C21DDC(p_svtlimitaddmaster, (int64_t)v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4BDB77D & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB77D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  ServantAssetLoadManager__clearServantlistlocal((ServantAssetLoadManager_o *)Instance, v2);
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
  if ( (byte_4BDB77E & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4BDB77E = 1;
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
    sub_1C22094(this, method);
  v10 = loadedList->fields._size;
  v11 = loadedList->fields._version + 1;
  loadedList->fields._size = 0;
  loadedList->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)loadedList->fields._items, 0, v10, 0LL);
  v2->fields.soundCount = 0;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__createShadowEffect(
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

  if ( (byte_4BDB7DC & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C21E38(&StringLiteral_19227/*"effect/ef_shadow0"*/);
    byte_4BDB7DC = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(effectId, 0LL, 1, 1.0, 0LL);
    if ( EffectObjectSafe )
    {
      v9 = EffectObjectSafe;
      UnityEngine_GameObject__SetActive(EffectObjectSafe, 1, 0LL);
      return v9;
    }
LABEL_22:
    sub_1C22094(EffectObjectSafe, v8);
  }
  v16 = tp + 1;
  v10 = System_Int32__ToString((int32_t)&v16, 0LL);
  EffectObjectSafe = (UnityEngine_GameObject_o *)System_String__Concat_63115476(
                                                   (System_String_o *)StringLiteral_19227/*"effect/ef_shadow0"*/,
                                                   v10,
                                                   0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_22;
  v11 = (Il2CppObject *)EffectObjectSafe;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this->fields._releaseAssets,
         (Il2CppObject *)EffectObjectSafe,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)this->fields._releaseAssets;
    if ( !EffectObjectSafe )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)EffectObjectSafe,
             v11,
             (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    if ( Item )
    {
      if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
        v13 = Item;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_object_(
                                                     (System_String_o *)v11,
                                                     (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( !releaseAssets )
      goto LABEL_22;
    v13 = (Il2CppObject *)EffectObjectSafe;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
      v11,
      (Il2CppObject *)EffectObjectSafe,
      (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       v13,
                                       (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  Il2CppObject *name; // x20

  if ( (byte_4BDB783 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4BDB783 = 1;
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
           (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)loadlist,
        name,
        (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_1C22094(loadlist, data);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadlist,
          name,
          (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
      goto LABEL_13;
    }
  }
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4BDB798 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12900/*"Servants/"*/);
    byte_4BDB798 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  BattleChrId = ServantAssetLoadManager__getBattleChrId((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v7);
  return System_String__Concat_63115476((System_String_o *)StringLiteral_12900/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4BDB797 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12900/*"Servants/"*/);
    byte_4BDB797 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_1C22094(LimitCountByImageLimitCostumeIn, v7);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(
                  (ServantAssetLoadManager_o *)Instance,
                  svtId,
                  LimitCountByImageLimitCostumeIn,
                  v8);
  return System_String__Concat_63115476((System_String_o *)StringLiteral_12900/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_39181844(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB799 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_12900/*"Servants/"*/);
    byte_4BDB799 = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12900/*"Servants/"*/, v6, 0LL);
}


Il2CppObject *__fastcall ServantAssetLoadManager__getAssetObject_object_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_304F650 *method)
{
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (Il2CppObject *)AssetManager__getAssetStorage(path, 0LL);
  if ( result )
    return AssetData__GetObject_object__49880776(
             (AssetData_o *)result,
             file,
             (const MethodInfo_2F91EC8 *)method->rgctx_data->_1_AssetData_GetObject_T_);
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
    sub_1C22094(0LL, v7);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = cameraId;
  if ( (byte_4BDB7DF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12901/*"Servants/Camera/"*/);
    byte_4BDB7DF = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_63115476((System_String_o *)StringLiteral_12901/*"Servants/Camera/"*/, v2, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB76C & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_12903/*"Servants/Commands/"*/);
    byte_4BDB76C = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12903/*"Servants/Commands/"*/, v6, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB76B & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_12903/*"Servants/Commands/"*/);
    byte_4BDB76B = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12903/*"Servants/Commands/"*/, v6, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_4BDB7F3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5969/*"Effect/BattleCommon/NameEffect/"*/);
    byte_4BDB7F3 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_63115476((System_String_o *)StringLiteral_5969/*"Effect/BattleCommon/NameEffect/"*/, v2, 0LL);
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


System_String_o *__fastcall ServantAssetLoadManager__getSkillCutInPath(
        ServantAssetLoadManager_o *this,
        int32_t cutInId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB7C0 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_5993/*"Effect/CutIn/Skill/{0}"*/);
    byte_4BDB7C0 = 1;
  }
  v8 = cutInId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_5993/*"Effect/CutIn/Skill/{0}"*/, v6, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB774 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_12906/*"Servants/Status/"*/);
    byte_4BDB774 = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12906/*"Servants/Status/"*/, v6, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB773 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_12906/*"Servants/Status/"*/);
    byte_4BDB773 = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12906/*"Servants/Status/"*/, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtmaster; // x0

  if ( (byte_4BDB76A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4BDB76A = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtmaster;
  if ( !svtmaster )
    sub_1C22094(0LL, v5);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              svtmaster,
                              svtId,
                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1C22094(0LL, v7);
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
    sub_1C22094(0LL, v7);
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
    sub_1C22094(SvtVoiceId, v8);
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
    sub_1C22094(SvtVoiceId, v8);
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

  if ( (byte_4BDB7AE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v9);
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
  System_String_o *BattleChrId; // x0
  System_String_o *v11; // x1

  if ( (byte_4BDB7AF & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C21E38(&StringLiteral_12900/*"Servants/"*/);
    byte_4BDB7AF = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v11 = System_String__Concat_63115476((System_String_o *)StringLiteral_12900/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v11,
                                       name,
                                       (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


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

  if ( (byte_4BDB7C5 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v7);
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
  if ( (byte_4BDB7C6 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C21E38(&StringLiteral_21899/*"motion"*/);
    sub_1C21E38(&StringLiteral_12904/*"Servants/Motion/"*/);
    byte_4BDB7C6 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v18, 0LL);
  v8 = System_String__Concat_63115476((System_String_o *)StringLiteral_12904/*"Servants/Motion/"*/, v7, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         v8,
                         (System_String_o *)StringLiteral_21899/*"motion"*/,
                         (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_18;
  v12 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_18;
  v13 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BD6BB1 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  v15 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BD6BB9 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB9 = 1;
  }
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(v15, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BD6BB6 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v16 )
LABEL_18:
    sub_1C22094(transform, v11);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v12;
}


UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEvents(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDB7AA & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
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
  System_String_o *ActorFolderName_39181844; // x0

  if ( (byte_4BDB7AB & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19717/*"fbxevent"*/);
    byte_4BDB7AB = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_39181844 = ServantAssetLoadManager__getActorFolderName_39181844(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_39181844 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  if ( !this )
    sub_1C22094(ActorFolderName_39181844, ActorFolderName_39181844);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_object_(
                                      this,
                                      ActorFolderName_39181844,
                                      (System_String_o *)StringLiteral_19717/*"fbxevent"*/,
                                      (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
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

  if ( (byte_4BDB79E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB79E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v12);
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
  System_String_o *ActorFolderName_39181844; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *AssetObject_object; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_Transform_o *v24; // x22
  UnityEngine_Transform_o *v25; // x19
  UnityEngine_Transform_o *v26; // x19

  if ( (byte_4BDB79F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18267/*"chr"*/);
    byte_4BDB79F = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_39181844 = ServantAssetLoadManager__getActorFolderName_39181844(
                                 svtId,
                                 (const MethodInfo *)assetPath);
  else
    ActorFolderName_39181844 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  *assetPath = ActorFolderName_39181844;
  sub_1C21DDC((PartyOrganizationUtility_o *)assetPath, (int64_t)ActorFolderName_39181844, v14, v15, v16, v17, v18, v19);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         *assetPath,
                         (System_String_o *)StringLiteral_18267/*"chr"*/,
                         (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4BD6BB9 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB9 = 1;
  }
  if ( !v25 )
    goto LABEL_21;
  UnityEngine_Transform__set_eulerAngles(v25, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  v26 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BD6BB6 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v26 )
LABEL_21:
    sub_1C22094(transform, v22);
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

  if ( (byte_4BDB7BC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal((ServantAssetLoadManager_o *)Instance, path, name, v7);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__49880776; // x19

  if ( (byte_4BDB7BD & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB7BD = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                AssetStorage,
                                name,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  else
    Object_object__49880776 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)Object_object__49880776;
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

  if ( (byte_4BDB7E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7E1 = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  return ServantAssetLoadManager__loadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, parent, v7);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraActionlocal(
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

  if ( (byte_4BDB7E2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18007/*"cameraAction"*/);
    byte_4BDB7E2 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CameraActionPath,
                         (System_String_o *)StringLiteral_18007/*"cameraAction"*/,
                         (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              AssetObject_object,
                                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_22;
    v12 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v12 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BD6BB9 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB9 = 1;
    }
    if ( !v13 )
      goto LABEL_22;
    UnityEngine_Transform__set_eulerAngles(v13, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BD6BB6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    if ( !v14 )
LABEL_22:
      sub_1C22094(transform, v11);
    UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  return v9;
}


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

  if ( (byte_4BDB76F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB76F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v9);
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

  if ( (byte_4BDB770 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18083/*"card_servant_"*/);
    byte_4BDB770 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v10);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v11, v12);
  v14 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v15 = System_String__Concat_63115476((System_String_o *)StringLiteral_18083/*"card_servant_"*/, v14, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCardLoadFolderName,
                         v15,
                         (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v17 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v19 )
    {
      if ( !tex )
        sub_1C22094(v19, v20);
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

  if ( (byte_4BDB7E5 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_39201324(
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
  System_String_o *CommandCodeFolderName; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v14; // w8
  UITexture_o *result; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDB7E7 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17991/*"c_{0:D7}"*/);
    byte_4BDB7E7 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v18 = commandCodeId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v8, v9, v10);
  v12 = System_String__Format((System_String_o *)StringLiteral_17991/*"c_{0:D7}"*/, v11, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCodeFolderName,
                         v12,
                         (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v14 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v16 )
    {
      if ( !tex )
        sub_1C22094(v16, v17);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_39201324(
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

  if ( (byte_4BDB7E8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB7E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userCommandCodeId,
                               (const MethodInfo_325E370 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_12:
    sub_1C22094(Instance, v8);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = klass;
  *(_QWORD *)&v15.fields.fakeValue = monitor;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v15, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v11, v12);
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_39201592(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BDB7E6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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

  if ( (byte_4BDB7B2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  return ServantAssetLoadManager__loadCommonEffectlocal((ServantAssetLoadManager_o *)Instance, name, v5);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  UnityEngine_Object_o *v5; // x0
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4BDB7B3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_19194/*"effect/"*/);
    byte_4BDB7B3 = 1;
  }
  v4 = System_String__Concat_63115476((System_String_o *)StringLiteral_19194/*"effect/"*/, name, 0LL);
  v5 = UnityEngine_Resources__Load(v4, 0LL);
  if ( v5 )
  {
    if ( (UnityEngine_GameObject_c *)v5->klass == UnityEngine_GameObject_TypeInfo )
      v6 = v5;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)v6,
                                       (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDB7B0 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
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

  if ( (byte_4BDB7B1 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB7B1 = 1;
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
  return StandFigureManager__CreateRenderPrefab_39223696(
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

  if ( (byte_4BDB77B & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB77B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v10);
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
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x2
  ServantAssetLoadManager_o *v35; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  int v38; // s0
  float v39; // s1
  float v40; // s2
  float v41; // s3
  unsigned int v42; // [xsp+Ch] [xbp-54h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BDB77C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_18084/*"card_servant_np"*/);
    byte_4BDB77C = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v14 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          svtId,
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  entity = 0LL;
  if ( !v14 )
    goto LABEL_49;
  v15 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)v14, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_16;
  if ( !v15 )
    goto LABEL_49;
  if ( !ServantLimitAddMaster__TryGetEntity(v15, &entity, svtId, limit, 0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_49;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0LL) )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v13, v17);
    if ( !entity )
      goto LABEL_49;
    v18 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(entity, 0LL);
    AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                           this,
                           v18,
                           OverwriteTDFileName,
                           (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_16:
    if ( EntityFromIDID )
    {
      v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      v23 = (System_String_o *)StringLiteral_18084/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
        v22 = sub_1C73D14(v16);
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1C73D14(v16);
      Instance = **(DataManager_o ***)(v24 + 184);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_49;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v23 = System_String__Concat_63126736(v23, (System_String_o *)StringLiteral_16399/*"_"*/, NpNameFileSuffix, 0LL);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v27);
        v35 = this;
        v34 = v23;
      }
      else
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        v28 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v27);
        v42 = (unsigned int)imageIndex >> 1;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v29, v30, v31);
        v33 = System_String__Format((System_String_o *)StringLiteral_25427/*"{0}"*/, v32, 0LL);
        v34 = System_String__Concat_63115476(v23, v33, 0LL);
        v35 = this;
        CommandCardLoadFolderName = v28;
      }
      AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                             v35,
                             CommandCardLoadFolderName,
                             v34,
                             (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
      v38 = 0;
      if ( (imageIndex & 1) != 0 )
        v39 = 0.0;
      else
        v39 = 0.5;
      v40 = 1.0;
      v41 = 0.5;
      UITexture__set_uvRect(tex, *(UnityEngine_Rect_o *)&v38, 0LL);
      return 1;
    }
LABEL_49:
    sub_1C22094(Instance, v13);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BDB7D8 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_TypeInfo);
    byte_4BDB7D8 = 1;
  }
  v15 = sub_1C22084(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_TypeInfo);
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156___ctor(
    (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v15,
    0,
    0LL);
  if ( !v15 )
    sub_1C22094(v16, v17);
  *(_QWORD *)(v15 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 40) = parent;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 40), (int64_t)parent, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v15 + 48) = svtId;
  *(_DWORD *)(v15 + 64) = treasureDvcId;
  *(_DWORD *)(v15 + 68) = treasureDvcLv;
  *(_QWORD *)(v15 + 72) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 72), (int64_t)callback, v30, v31, v32, v33, v34, v35);
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

  if ( (byte_4BDB7C1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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

  if ( (byte_4BDB7C2 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB7C2 = 1;
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


UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFace(
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDB777 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB777 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
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

  if ( (byte_4BDB778 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_23961/*"status_servant_"*/);
    byte_4BDB778 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v9);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v10, v11);
  v13 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v14 = System_String__Concat_63115476((System_String_o *)StringLiteral_23961/*"status_servant_"*/, v13, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         StatusImageFolderName,
                         v14,
                         (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v16 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v18 )
    {
      if ( !tex )
        sub_1C22094(v18, v19);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDB7B6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
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
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__49880776; // x19
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v13 = effectFolder;
  v14 = weapongroup;
  if ( (byte_4BDB7B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6022/*"Effect/weapon/"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDB7B7 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v14, 0LL);
  v8 = System_String__Concat_63115476((System_String_o *)StringLiteral_6022/*"Effect/weapon/"*/, v7, 0LL);
  if ( effectFolder )
  {
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v8 = System_String__Concat_63126736(v8, (System_String_o *)StringLiteral_1123/*"/"*/, v9, 0LL);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v8, 0LL);
  if ( AssetStorage )
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                AssetStorage,
                                name,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  else
    Object_object__49880776 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)Object_object__49880776;
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
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0

  if ( (byte_4BDB7D5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    byte_4BDB7D5 = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         ActorVoice,
         uniqueId,
         (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             ActorVoice,
                                                                             uniqueId,
                                                                             (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1C22094(ActorVoice, *(_QWORD *)&uniqueId);
  }
}


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

  if ( (byte_4BDB7C9 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v18);
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

  if ( (byte_4BDB7CC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v12);
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
  SePlayer_o *result; // x0
  const MethodInfo *v14; // x3
  int32_t VoiceId; // w8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDB7CD & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    sub_1C21E38(&StringLiteral_12900/*"Servants/"*/);
    byte_4BDB7CD = 1;
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
      v16 = (_QWORD *)sub_1C21E50(Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v16, v16[4]);
    v18 = System_Int32__ToString((int32_t)&v20, 0LL);
    v19 = System_String__Concat_63115476((System_String_o *)StringLiteral_12900/*"Servants/"*/, v18, 0LL);
    return OverwriteAssetSoundName__PlaySe_39859480(v17, v19, targetFileName, volume, 0LL, 0, 0LL);
  }
  return result;
}


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
  __int64 v20; // x23
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x28
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  int32_t VoicePrefix; // w0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_String_o **v44; // x8
  System_String_o *v45; // x22
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v48; // x22
  System_String_o *v49; // x24
  System_Action_o *v50; // x25
  Il2CppObject *v52; // x0
  int32_t v53; // [xsp+8h] [xbp-68h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDB7CA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager___c__DisplayClass138_0__playBattleVoicelocal_b__0__);
    sub_1C21E38(&ServantAssetLoadManager___c__DisplayClass138_0_TypeInfo);
    sub_1C21E38(&StringLiteral_25387/*"{0:D0}_{1}"*/);
    sub_1C21E38(&StringLiteral_12900/*"Servants/"*/);
    sub_1C21E38(&StringLiteral_9695/*"NoblePhantasm/"*/);
    byte_4BDB7CA = 1;
  }
  v20 = sub_1C22084(ServantAssetLoadManager___c__DisplayClass138_0_TypeInfo);
  ServantAssetLoadManager___c__DisplayClass138_0___ctor((ServantAssetLoadManager___c__DisplayClass138_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = callback;
  v29 = v20 + 24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)callback, v30, v31, v32, v33, v34, v35);
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
               (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__object___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   ActorVoice,
                                                                                   uniqueId,
                                                                                   (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
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
          (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v44 = (System_String_o **)(isNp ? &StringLiteral_9695/*"NoblePhantasm/"*/ : &StringLiteral_12900/*"Servants/"*/);
        v45 = *v44;
        v46 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v47 = System_String__Concat_63115476(v45, v46, 0LL);
        v48 = this->fields.ActorVoice;
        v49 = v47;
        v50 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v50,
          (Il2CppObject *)v20,
          Method_ServantAssetLoadManager___c__DisplayClass138_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)SoundManager__playVoice_39957484(
                                                                               v49,
                                                                               targetFileName,
                                                                               volume,
                                                                               v50,
                                                                               0,
                                                                               0LL);
        if ( v48 )
        {
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)v48,
            uniqueId,
            (Il2CppObject *)ActorVoice,
            (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_1C22094(ActorVoice, v22);
    }
  }
  else
  {
    v53 = VoicePrefix;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v41, v42, v43);
    targetFileName = System_String__Format_63129848(
                       (System_String_o *)StringLiteral_25387/*"{0:D0}_{1}"*/,
                       v52,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  if ( *(_QWORD *)v29 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v29 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v29 + 64LL),
      *(_QWORD *)(*(_QWORD *)v29 + 40LL));
  return 0LL;
}


void __fastcall ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = weapongroup;
  if ( (byte_4BDB7C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12904/*"Servants/Motion/"*/);
    byte_4BDB7C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_String__Concat_63115476((System_String_o *)StringLiteral_12904/*"Servants/Motion/"*/, v5, 0LL);
  if ( !Instance )
    sub_1C22094(v6, v7);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v6, dlOnly, v8);
}


void __fastcall ServantAssetLoadManager__preloadBattleActor(
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x6

  if ( (byte_4BDB79A & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB79A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1C22094(Instance, v6);
  ServantAssetLoadManager__preloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
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
  System_String_o *ActorFolderName_39181844; // x0
  const MethodInfo *v15; // x3

  if ( (byte_4BDB79B & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB79B = 1;
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
      ActorFolderName_39181844 = ServantAssetLoadManager__getActorFolderName_39181844(v13, *(const MethodInfo **)&svtId);
      goto LABEL_10;
    }
  }
  ActorFolderName_39181844 = ServantAssetLoadManager__getActorFolderName(
                               v13,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_10:
  if ( !this )
    sub_1C22094(ActorFolderName_39181844, ActorFolderName_39181844);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_39181844, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BDB7BA & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BDB7BB & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    byte_4BDB7BB = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_1C22094(0LL, v6);
  v8 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v9 = BattleCommonEffectPathList;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1C2209C(BattleCommonEffectPathList, v6);
      ServantAssetLoadManager__setLoadList(this, v9->m_Items[v10], 0, v7);
      LODWORD(v8) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return v9;
}


void __fastcall ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x21
  System_String_o *CameraActionPath; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4BDB7E0 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7E0 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v5);
    if ( !Instance )
      sub_1C22094(CameraActionPath, v8);
    ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, CameraActionPath, dlOnly, v9);
  }
}


void __fastcall ServantAssetLoadManager__preloadCommandCard(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4BDB76D & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB76D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
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

  if ( (byte_4BDB76E & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB76E = 1;
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
  if ( (byte_4BDB7E9 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB7E9 = 1;
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
          sub_1C2209C(this, commandCodeIds);
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4BDB793 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB793 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x20
  __int64 v6; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v8; // x20
  unsigned __int64 v9; // x24
  bool *p_DispLog; // x28
  SoundManager_o *v11; // x21
  System_String_o *VoiceAssetName; // x22
  System_Action_o *v13; // x23

  if ( (byte_4BDB794 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys_CommandSpellEntity___);
    sub_1C21E38(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4BDB794 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (v5 = Instance,
        v6 = sub_1C21F6C(*((_QWORD *)&Instance->klass->vtable._1_Finalize.methodPtr
                         + 2
                         * *((unsigned __int16 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys_CommandSpellEntity___
                           + 40))),
        (Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, __int64))(v6 + 8))(v5, v6)) == 0LL) )
  {
LABEL_21:
    sub_1C22094(Instance, v4);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v8 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0LL;
    p_DispLog = &Instance->fields._DispLog;
    do
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
LABEL_20:
        sub_1C2209C(Instance, v4);
      Instance = *(DataManager_o **)&p_DispLog[8 * v9];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
            goto LABEL_20;
          Instance = *(DataManager_o **)&p_DispLog[8 * v9];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
              goto LABEL_20;
            v11 = (SoundManager_o *)Instance;
            Instance = *(DataManager_o **)&p_DispLog[8 * v9];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
            v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v13,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v11 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v11, VoiceAssetName, v13, 1, 0LL);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
      ++v9;
    }
    while ( (__int64)v9 < (int)m_CancellationTokenSource );
  }
}


void __fastcall ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        bool dlOnly,
        const MethodInfo *method)
{
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  System_String_o *NameEffectPath; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4BDB7F0 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7F0 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v7 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v7, v6);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_1C22094(0LL, v10);
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, NameEffectPath, dlOnly, v11);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadMovie(
        EffectMovieEntity_o *ent,
        int32_t loadFolderType,
        int32_t optionNo,
        bool dlOnly,
        const MethodInfo *method)
{
  EffectMovieEntity_o *v8; // x20
  EffectMovieMaster_c *v9; // x0
  int32_t *v10; // x1
  System_String_o *NOBLE_PATH; // x22
  System_Int32_c *v12; // x0
  EffectMovieMaster_c *v13; // x0
  Il2CppObject *v14; // x0
  System_String_o *BATTLECOMMON_PATH; // x0
  System_String_o *name; // x1
  System_String_o *v17; // x2
  EffectMovieMaster_c *v18; // x0
  System_String_o *v19; // x20
  const MethodInfo *v20; // x3
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  v8 = ent;
  if ( (byte_4BDB7B5 & 1) == 0 )
  {
    sub_1C21E38(&EffectMovieMaster_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1121/*".usm"*/);
    ent = (EffectMovieEntity_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB7B5 = 1;
  }
  if ( !v8 )
    goto LABEL_27;
  if ( v8->fields.folderType != loadFolderType )
    return;
  switch ( loadFolderType )
  {
    case 2:
      v13 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v13 = EffectMovieMaster_TypeInfo;
      }
      v10 = &v21;
      NOBLE_PATH = v13->static_fields->NOBLE_PATH;
      v12 = int_TypeInfo;
      v21 = optionNo;
      goto LABEL_14;
    case 5:
      v18 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v18 = EffectMovieMaster_TypeInfo;
      }
      name = v8->fields.name;
      BATTLECOMMON_PATH = v18->static_fields->BATTLECOMMON_PATH;
      v17 = (System_String_o *)StringLiteral_1121/*".usm"*/;
      goto LABEL_18;
    case 3:
      v9 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v9 = EffectMovieMaster_TypeInfo;
      }
      v10 = &v22;
      NOBLE_PATH = v9->static_fields->WEAPON_PATH;
      v12 = int_TypeInfo;
      v22 = optionNo;
LABEL_14:
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(v12, v10, *(_QWORD *)&optionNo, dlOnly, method);
      BATTLECOMMON_PATH = System_String__Format(NOBLE_PATH, v14, 0LL);
      name = v8->fields.name;
      v17 = (System_String_o *)StringLiteral_1121/*".usm"*/;
LABEL_18:
      v19 = System_String__Concat_63126736(BATTLECOMMON_PATH, name, v17, 0LL);
      goto LABEL_20;
  }
  v19 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !ent )
    goto LABEL_27;
  if ( !AssetManager__IsExistAssetStorage((AssetManager_o *)ent, v19, 0LL) )
    return;
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !ent )
    goto LABEL_27;
  if ( !AssetManager__IsNeedDownload((AssetManager_o *)ent, v19, 0LL) )
    return;
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ent )
LABEL_27:
    sub_1C22094(ent, *(_QWORD *)&loadFolderType);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)ent, v19, dlOnly, v20);
}


void __fastcall ServantAssetLoadManager__preloadServant(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BDB788 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB788 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  ServantAssetLoadManager__preloadServantlocal((ServantAssetLoadManager_o *)Instance, args, dlOnly, v7);
}


void __fastcall ServantAssetLoadManager__preloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5

  if ( (byte_4BDB78B & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB78B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
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

  if ( (byte_4BDB78C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__);
    sub_1C21E38(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12907/*"Servants_"*/);
    byte_4BDB78C = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v14 = System_Int32__ToString((int32_t)&v20, 0LL);
    v15 = System_String__Concat_63115476((System_String_o *)StringLiteral_12907/*"Servants_"*/, v14, 0LL);
    v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    v17 = v16;
    if ( dlOnly )
    {
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, v15, v17, 1, 0LL);
        return;
      }
LABEL_13:
      sub_1C22094(v18, v19);
    }
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v15, v17, 1, 0LL);
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
    sub_1C22094(this, 0LL);
  v6 = dlOnly;
  ServantAssetLoadManager__preloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
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


void __fastcall ServantAssetLoadManager__preloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BDB78F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB78F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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

  if ( (byte_4BDB790 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__);
    sub_1C21E38(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDB790 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C73D14(v8);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C73D14(v8);
    v11 = **(DataManager_o ***)(v10 + 184);
    if ( v11 )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            v11,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v11 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   (int32_t)v11,
                   skillInfo->fields.skilllv,
                   0LL);
        if ( !Entity )
          return;
        v14 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v14, 0LL);
          v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v16, 1, 0LL);
          return;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v18 = SkillLvEntity__getVoiceAssetName(v14, 0LL);
        v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v18, v19, 1, 0LL);
          return;
        }
      }
    }
    sub_1C22094(v11, v7);
  }
}


void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4BDB775 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB775 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
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

  if ( (byte_4BDB776 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB776 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(
                            svtId,
                            svtId,
                            *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, StatusImageFolderName, dlOnly, v9);
}


void __fastcall ServantAssetLoadManager__preloadWeaponEffect(
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
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int i; // w8
  Il2CppObject *v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  const MethodInfo *v23; // x3
  int32_t v24; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v25; // [xsp+8h] [xbp-58h] BYREF
  int v26; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v27; // [xsp+18h] [xbp-48h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-44h] BYREF

  v27 = effectFolder;
  v28 = weapongroup;
  if ( (byte_4BDB7B4 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&StringLiteral_6022/*"Effect/weapon/"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    sub_1C21E38(&StringLiteral_6025/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/);
    sub_1C21E38(&StringLiteral_5094/*"D3"*/);
    byte_4BDB7B4 = 1;
  }
  v26 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v7 = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( effectFolder )
  {
    v8 = System_Int32__ToString((int32_t)&v27, 0LL);
    v9 = System_String__Concat_63128740(
           (System_String_o *)StringLiteral_6022/*"Effect/weapon/"*/,
           v7,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           v8,
           0LL);
    if ( !Instance )
LABEL_16:
      sub_1C22094(v9, v10);
  }
  else
  {
    v9 = System_String__Concat_63115476((System_String_o *)StringLiteral_6022/*"Effect/weapon/"*/, v7, 0LL);
    if ( !Instance )
      goto LABEL_16;
  }
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v9, dlOnly, v11);
  for ( i = 1; ; i = v26 + 1 )
  {
    v25 = v28;
    v26 = i;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12, v13, v14);
    v24 = v28;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v17, v18, v19);
    v21 = (Il2CppObject *)System_Int32__ToString_63921084((int32_t)&v26, (System_String_o *)StringLiteral_5094/*"D3"*/, 0LL);
    v22 = System_String__Format_63129916((System_String_o *)StringLiteral_6025/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v16, v20, v21, 0LL);
    v9 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !v9 )
      goto LABEL_16;
    if ( !AssetManager__IsExistAssetStorage((AssetManager_o *)v9, v22, 0LL) )
      break;
    v9 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !v9 )
      goto LABEL_16;
    if ( AssetManager__IsNeedDownload((AssetManager_o *)v9, v22, 0LL) )
    {
      v9 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !v9 )
        goto LABEL_16;
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)v9, v22, dlOnly, v23);
    }
  }
}


void __fastcall ServantAssetLoadManager__releaseNoblePhantasm(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *nobleAssetData; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  AssetData_o *nobleSequenceData; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_object__o *nobleEffectList; // x0
  System_String_array *v27; // x0
  const MethodInfo *v28; // x2
  struct System_Collections_Generic_List_string__o *v29; // x8
  int32_t size; // w2
  int v31; // w9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDB7DA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4BDB7DA = 1;
  }
  memset(&v32, 0, sizeof(v32));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nobleAssetData, 0LL, v4, v5, v6, v7, v8, v9);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nobleSequenceData, 0LL, v11, v12, v13, v14, v15, v16);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)bgAssetDataList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v32.fields._current )
        sub_1C22094(0LL, v18);
      AssetData__RemoveEntry((AssetData_o *)v32.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v19 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bgAssetDataList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  }
  nobleEffectList = (System_Collections_Generic_List_object__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_20;
  if ( nobleEffectList->fields._size <= 0 )
    return;
  v27 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v27, v28);
  v29 = this->fields.nobleEffectList;
  if ( !v29 )
LABEL_20:
    sub_1C22094(nobleEffectList, method);
  size = v29->fields._size;
  v31 = v29->fields._version + 1;
  v29->fields._size = 0;
  v29->fields._version = v31;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v29->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *downloadlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x8
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  if ( (byte_4BDB781 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_endloadList__);
    byte_4BDB781 = 1;
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
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          downloadlist->fields._size = size + 1;
          v15[4] = (Il2CppClass *)path;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 4), (int64_t)path, dlOnly, (int32_t)method, v4, v5, v6, v7);
        }
        v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v26,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager_endloadList__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__downloadAssetStorage(path, v26, 20, 0LL) )
          return;
        downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
        if ( downloadlist )
        {
          System_Collections_Generic_List_object___Remove(
            downloadlist,
            (Il2CppObject *)path,
            (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
          return;
        }
      }
    }
LABEL_28:
    sub_1C22094(downloadlist, path);
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
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    downloadlist->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)path;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)path, dlOnly, (int32_t)method, v4, v5, v6, v7);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_28;
  v27 = downloadlist->fields._items;
  v28 = Method_System_Collections_Generic_List_string__Add__;
  ++downloadlist->fields._version;
  if ( !v27 )
    goto LABEL_28;
  v29 = downloadlist->fields._size;
  if ( (unsigned int)v29 >= v27->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      downloadlist,
      (Il2CppObject *)path,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v27->obj.klass + v29;
    downloadlist->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)path;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)path, v20, v21, v22, v23, v24, v25);
  }
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v31, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39041296(path, 20, v31, 0LL);
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

  if ( (byte_4BDB782 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB782 = 1;
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

  if ( (byte_4BDB7C7 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  ServantAssetLoadManager__unloadActorMotionlocal((ServantAssetLoadManager_o *)Instance, weapongroup, v5);
}


void __fastcall ServantAssetLoadManager__unloadActorMotionlocal(
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
  if ( (byte_4BDB7C8 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&StringLiteral_12904/*"Servants/Motion/"*/);
    byte_4BDB7C8 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v9, 0LL);
  loadedList = (Il2CppObject *)System_String__Concat_63115476((System_String_o *)StringLiteral_12904/*"Servants/Motion/"*/, v4, 0LL);
  if ( !this->fields.loadedList )
    goto LABEL_10;
  v7 = loadedList;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          loadedList,
          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = (Il2CppObject *)this->fields.loadedList;
  if ( !loadedList )
LABEL_10:
    sub_1C22094(loadedList, v6);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    v7,
    (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v7, 0LL);
  AssetManager__releaseAsset_39034872(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4BDB7DD & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  ServantAssetLoadManager__unloadAssetsLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void __fastcall ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDB7DE & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4BDB7DE = 1;
  }
  memset(&v9, 0, sizeof(v9));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)loadedList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_39034872(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.loadedList;
  if ( !v6 )
LABEL_16:
    sub_1C22094(loadedList, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4BDB7A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1C22094(Instance, v4);
  ServantAssetLoadManager__unloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
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
  Il2CppObject *ActorFolderName; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4BDB7A1 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB7A1 = 1;
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
          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_11;
  ActorFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !ActorFolderName )
LABEL_14:
    sub_1C22094(ActorFolderName, v10);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)ActorFolderName,
    v11,
    (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_11:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0LL);
  AssetManager__releaseAsset_39034872(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BDB7E3 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7E3 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v4);
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

  if ( (byte_4BDB7E4 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB7E4 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v6);
}


void __fastcall ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4BDB771 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB771 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  ServantAssetLoadManager__unloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *CommandCardLoadFolderName; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4BDB772 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB772 = 1;
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
          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  CommandCardLoadFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !CommandCardLoadFolderName )
LABEL_12:
    sub_1C22094(CommandCardLoadFolderName, v7);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)CommandCardLoadFolderName,
    v8,
    (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v8, 0LL);
  AssetManager__releaseAsset_39034872(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4BDB795 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB795 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x0
  int v6; // w8
  __int64 v7; // x19
  unsigned int i; // w21
  __int64 v9; // x23
  CommandSpellEntity_o *v10; // x0
  __int64 *v11; // x23
  CommandSpellEntity_o *v12; // t1
  SoundManager_o *v13; // x20

  if ( (byte_4BDB796 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys_CommandSpellEntity___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4BDB796 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0
    || (v4 = Instance,
        v5 = sub_1C21F6C(*(_QWORD *)(*(_QWORD *)Instance
                                   + 16LL
                                   * *((unsigned __int16 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys_CommandSpellEntity___
                                     + 40)
                                   + 320)),
        (Instance = (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 8))(v4, v5)) == 0) )
  {
LABEL_21:
    sub_1C22094(Instance, v3);
  }
  v6 = *(_DWORD *)(Instance + 24);
  v7 = Instance;
  if ( v6 >= 1 )
  {
    for ( i = 0; (int)i < v6; ++i )
    {
      if ( i >= v6 )
LABEL_20:
        sub_1C2209C(Instance, v3);
      v9 = v7 + 8LL * (int)i;
      v12 = *(CommandSpellEntity_o **)(v9 + 32);
      v11 = (__int64 *)(v9 + 32);
      v10 = v12;
      if ( !v12 )
        return;
      Instance = CommandSpellEntity__isUseBattle(v10, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( i >= *(_DWORD *)(v7 + 24) )
          goto LABEL_20;
        Instance = *v11;
        if ( !*v11 )
          goto LABEL_21;
        Instance = (__int64)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= *(_DWORD *)(v7 + 24) )
            goto LABEL_20;
          v13 = (SoundManager_o *)Instance;
          Instance = *v11;
          if ( !*v11 )
            goto LABEL_21;
          Instance = (__int64)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( !v13 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v13, (System_String_o *)Instance, 0LL);
        }
      }
      v6 = *(_DWORD *)(v7 + 24);
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

  if ( (byte_4BDB7F1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  ServantAssetLoadManager__unloadFromDeckServantlocal((ServantAssetLoadManager_o *)Instance, deckSvt, v5);
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServantlocal(
        ServantAssetLoadManager_o *this,
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  Il2CppObject *NameEffectPath; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4BDB7F2 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB7F2 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v7 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = (Il2CppObject *)ServantAssetLoadManager__getNameEffectPath(v7, v6);
      if ( this->fields.loadedList )
      {
        v10 = (System_String_o *)NameEffectPath;
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)this->fields.loadedList,
                NameEffectPath,
                (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_11:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetStorage = AssetManager__getAssetStorage(v10, 0LL);
          AssetManager__releaseAsset_39034872(AssetStorage, 0LL);
          return;
        }
        NameEffectPath = (Il2CppObject *)this->fields.loadedList;
        if ( NameEffectPath )
        {
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)NameEffectPath,
            (Il2CppObject *)v10,
            (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_11;
        }
      }
      sub_1C22094(NameEffectPath, v9);
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BDB789 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB789 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  ServantAssetLoadManager__unloadServantlocal((ServantAssetLoadManager_o *)Instance, args, v5);
}


void __fastcall ServantAssetLoadManager__unloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDB78D & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB78D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
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
  int32_t VoiceId; // w0
  int32_t v10; // w8
  Il2CppObject *Instance; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDB78E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12907/*"Servants_"*/);
    byte_4BDB78E = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v10 = overwriteSvtVoiceId;
  else
    v10 = VoiceId;
  v15 = v10;
  if ( v10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v12 = System_Int32__ToString((int32_t)&v15, 0LL);
    v13 = System_String__Concat_63115476((System_String_o *)StringLiteral_12907/*"Servants_"*/, v12, 0LL);
    if ( !Instance )
      sub_1C22094(v13, v14);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, v13, 0LL);
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
    sub_1C22094(this, 0LL);
  ServantAssetLoadManager__unloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
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

  if ( (byte_4BDB791 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB791 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v5);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
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

  if ( (byte_4BDB792 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4BDB792 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         method)
    && skillInfo->fields.skilllv )
  {
    v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C73D14(v5);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C73D14(v5);
    VoiceAssetName = **(DataManager_o ***)(v7 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          VoiceAssetName,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
      v11 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = (DataManager_o *)SkillLvEntity__getVoiceAssetName(v11, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_1C22094(VoiceAssetName, v4);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BDB7C3 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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


void __fastcall ServantAssetLoadManager__unloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BDB779 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB779 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  ServantAssetLoadManager__unloadStatusFacelocal((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v7);
}


void __fastcall ServantAssetLoadManager__unloadStatusFacelocal(
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

  if ( (byte_4BDB77A & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDB77A = 1;
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
          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  StatusImageFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !StatusImageFolderName )
LABEL_12:
    sub_1C22094(StatusImageFolderName, v10);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)StatusImageFolderName,
    v11,
    (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0LL);
  AssetManager__releaseAsset_39034872(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v7; // x19

  if ( (byte_4BDB7BF & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4BDB7BF = 1;
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_14;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)path,
          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_14:
    sub_1C22094(loadedList, path);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)path,
    (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
  {
    v7 = AssetStorage;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39034872(v7, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BDB7BE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
    sub_1C22094(this, 0LL);
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1C2209C(this, pathList);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, pathList->m_Items[v6], method);
      LODWORD(v3) = pathList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BDB7B8 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDB7B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
    (ServantAssetLoadManager_o *)Instance,
    weapongroup,
    effectFolder,
    v7);
}


void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
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
  if ( (byte_4BDB7B9 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&StringLiteral_6022/*"Effect/weapon/"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDB7B9 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v13, 0LL);
  v8 = System_String__Concat_63115476((System_String_o *)StringLiteral_6022/*"Effect/weapon/"*/, v6, 0LL);
  if ( effectFolder )
  {
    v9 = System_Int32__ToString((int32_t)&v12, 0LL);
    v8 = System_String__Concat_63126736(v8, (System_String_o *)StringLiteral_1123/*"/"*/, v9, 0LL);
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_12;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)v8,
          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_12:
    sub_1C22094(loadedList, v7);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)v8,
    (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v8, 0LL);
  AssetManager__releaseAsset_39034872(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__GetAheadBg_d__158___ctor(
        ServantAssetLoadManager__GetAheadBg_d__158_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantAssetLoadManager__GetAheadBg_d__158__MoveNext(
        ServantAssetLoadManager__GetAheadBg_d__158_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantAssetLoadManager__GetAheadBg_d__158_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_object__o *v12; // x22
  ServantAssetLoadManager__GetAheadBg_d__158_o **p_bgAheadList_5__2; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4BDB7F9 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager__GetAheadBg_b__158_0__);
    this = (ServantAssetLoadManager__GetAheadBg_d__158_o *)sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDB7F9 = 1;
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    }
    v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v8->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v12;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__158_o **)&v8->fields._bgAheadList_5__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._bgAheadList_5__2, (int64_t)v12, v14, v15, v16, v17, v18, v19);
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
          sub_1C2209C(this, method);
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
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v32 + 32) = method;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)method, v20, v21, v22, v23, v24, v25);
          }
        }
        max_length = v26->max_length;
        if ( (int)++v28 >= max_length )
          goto LABEL_18;
      }
LABEL_35:
      sub_1C22094(this, method);
    }
LABEL_18:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_35;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v49.fields._current )
        sub_1C22094(0LL, v33);
      BgAssetPath = WellFired_USFGOChangeBgEvent__GetBgAssetPath(
                      (WellFired_USFGOChangeBgEvent_o *)v49.fields._current,
                      0LL);
      v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v35, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__158_0__, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(BgAssetPath, v35, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
  }
  this = (ServantAssetLoadManager__GetAheadBg_d__158_o *)&v8->fields._bgAheadList_5__2;
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
    this->klass = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_32;
  }
  v40 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v40, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v40;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C21DDC(p__2__current, (int64_t)v40, v42, v43, v44, v45, v46, v47);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall ServantAssetLoadManager__GetAheadBg_d__158__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__GetAheadBg_d__158_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantAssetLoadManager__GetAheadBg_d__158__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__GetAheadBg_d__158_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ServantAssetLoadManager__GetAheadBg_d__158_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall ServantAssetLoadManager__GetAheadBg_d__158__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__GetAheadBg_d__158_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantAssetLoadManager__GetAheadBg_d__158__System_IDisposable_Dispose(
        ServantAssetLoadManager__GetAheadBg_d__158_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDB7F7 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager___c_TypeInfo);
    byte_4BDB7F7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantAssetLoadManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantAssetLoadManager___c___ctor(ServantAssetLoadManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Shader_o *__fastcall ServantAssetLoadManager___c___GetReplaceChocoShaderFunc_b__98_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


UnityEngine_Shader_o *__fastcall ServantAssetLoadManager___c___GetReplaceDeadShaderFunc_b__97_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


void __fastcall ServantAssetLoadManager___c__DisplayClass138_0___ctor(
        ServantAssetLoadManager___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass138_0___playBattleVoicelocal_b__0(
        ServantAssetLoadManager___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  ServantAssetLoadManager__EndPlaySe(_4__this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass156_0___ctor(
        ServantAssetLoadManager___c__DisplayClass156_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass156_0___loadNoblePhantasmCoroutine_b__0(
        ServantAssetLoadManager___c__DisplayClass156_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ServantAssetLoadManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, data);
  _4__this->fields.nobleSequenceData = data;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&_4__this->fields.nobleSequenceData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isNext = 1;
}


void __fastcall ServantAssetLoadManager___c__DisplayClass156_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass156_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  char *_4__this; // x0
  Il2CppObject *AssetObject_object; // x20
  Il2CppObject *v12; // x0
  struct UnityEngine_GameObject_o **p_sequence; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Transform_o *v20; // x21
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *v23; // x21
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v25; // x20
  ServantAssetLoadManager_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4BDB7F8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C21E38(&Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__2__);
    sub_1C21E38(&StringLiteral_4556/*"ChrSequence1"*/);
    byte_4BDB7F8 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  *((_QWORD *)_4__this + 14) = assetData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 112), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         (ServantAssetLoadManager_o *)_4__this,
                         this->fields.sequencePath,
                         (System_String_o *)StringLiteral_4556/*"ChrSequence1"*/,
                         (const MethodInfo_304F650 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object_(
          AssetObject_object,
          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = (struct UnityEngine_GameObject_o *)v12;
  p_sequence = &this->fields.sequence;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.sequence, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  _4__this = (char *)this->fields.sequence;
  if ( !_4__this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  if ( !this->fields.parent )
    goto LABEL_28;
  v20 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (char *)UnityEngine_GameObject__get_transform(this->fields.parent, 0LL);
  if ( !v20 )
    goto LABEL_28;
  UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)_4__this, 0LL);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v21 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4BD6BB1 )
  {
    _4__this = (char *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v21 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v22 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4BD6BB9 )
  {
    _4__this = (char *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB9 = 1;
  }
  if ( !v22 )
    goto LABEL_28;
  UnityEngine_Transform__set_eulerAngles(v22, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v23 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4BD6BB6 )
  {
    _4__this = (char *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v23 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v25 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v26 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v27, v28, v29, v30, v31, v32);
  }
  if ( !v26 )
LABEL_28:
    sub_1C22094(_4__this, assetData);
  ServantAssetLoadManager__LoadBg(v26, v25, _9__2, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass156_0___loadNoblePhantasmCoroutine_b__2(
        ServantAssetLoadManager___c__DisplayClass156_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNext = 1;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156___ctor(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156__MoveNext(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *v8; // x19
  struct ServantAssetLoadManager_o *_4__this; // x20
  Il2CppObject *v10; // x22
  struct ServantAssetLoadManager___c__DisplayClass156_0_o **p__8__1; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t parent; // x1
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v32; // x20
  System_String_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v50; // x22
  System_String_o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_String_o *nobleDataPath_5__2; // x22
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v67; // x22
  System_String_o *v68; // x20
  AssetLoader_LoadEndDataHandler_o *v69; // x21
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v70; // x8
  _BOOL4 isNext; // w20
  struct ServantAssetLoadManager_o **p__4__this; // x0
  System_String_o *v73; // x21
  Il2CppObject *v74; // x23
  AssetLoader_LoadEndDataHandler_o *v75; // x22
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v76; // x8
  UnityEngine_Object_o *sequence; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_List_int__o *v84; // x21
  System_Int32_array *funcId; // x21
  int v86; // w21
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v87; // x8
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *v89; // x21
  __int64 v90; // x22
  PartyOrganizationUtility_o *p__2__current; // x19
  int v92; // w8
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v93; // x8
  struct ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x9
  bool result; // w0
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  int32_t _1__state; // [xsp+1Ch] [xbp-44h] BYREF

  v8 = this;
  if ( (byte_4BDB7FA & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&BattleSequenceManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__0__);
    sub_1C21E38(&Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__1__);
    sub_1C21E38(&ServantAssetLoadManager___c__DisplayClass156_0_TypeInfo);
    sub_1C21E38(&StringLiteral_9695/*"NoblePhantasm/"*/);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)sub_1C21E38(&StringLiteral_9697/*"NoblePhantasm/Sequence/"*/);
    byte_4BDB7FA = 1;
  }
  _1__state = 0;
  entity = 0LL;
  effectIdList = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C22084(ServantAssetLoadManager___c__DisplayClass156_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v8->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass156_0_o *)v10;
      p__8__1 = &v8->fields.__8__1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v10, v12, v13, v14, v15, v16, v17);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      v24 = (int64_t)v8->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v24;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v24, v18, v19, v20, v21, v22, v23);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      parent = (int64_t)v8->fields.parent;
      *(_QWORD *)&this->fields.svtId = parent;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.svtId, parent, v25, v26, v27, v28, v29, v30);
      if ( !*p__8__1 )
        goto LABEL_79;
      (*p__8__1)->fields.isNext = 0;
      if ( !_4__this )
        goto LABEL_79;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, 0LL);
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)BattleSequenceManager__SafeGetExecutingTdInfo(0LL);
      if ( !this )
        goto LABEL_79;
      _1__state = this->fields.__1__state;
      v32 = *p__8__1;
      v33 = System_Int32__ToString((int32_t)&_1__state, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)System_String__Concat_63115476(
                                                                               (System_String_o *)StringLiteral_9697/*"NoblePhantasm/Sequence/"*/,
                                                                               v33,
                                                                               0LL);
      if ( !v32 )
        goto LABEL_79;
      v32->fields.sequencePath = (struct System_String_o *)this;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v32->fields.sequencePath, (int64_t)this, v34, v35, v36, v37, v38, v39);
      v40 = System_Int32__ToString((int32_t)&_1__state, 0LL);
      v41 = System_String__Concat_63115476((System_String_o *)StringLiteral_9695/*"NoblePhantasm/"*/, v40, 0LL);
      v8->fields._nobleDataPath_5__2 = v41;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._nobleDataPath_5__2,
        (int64_t)v41,
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
      if ( AssetManager__isExistAssetStorage(sequencePath, 0LL) )
        goto LABEL_18;
      v50 = v8->fields.__8__1;
      v51 = System_Int32__ToString((int)v8 + 48, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)System_String__Concat_63115476(
                                                                               (System_String_o *)StringLiteral_9697/*"NoblePhantasm/Sequence/"*/,
                                                                               v51,
                                                                               0LL);
      if ( !v50 )
        goto LABEL_79;
      v50->fields.sequencePath = (struct System_String_o *)this;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v50->fields.sequencePath, (int64_t)this, v52, v53, v54, v55, v56, v57);
LABEL_18:
      nobleDataPath_5__2 = v8->fields._nobleDataPath_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)AssetManager__isExistAssetStorage(
                                                                               nobleDataPath_5__2,
                                                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v59 = System_Int32__ToString((int)v8 + 48, 0LL);
        v60 = System_String__Concat_63115476((System_String_o *)StringLiteral_9695/*"NoblePhantasm/"*/, v59, 0LL);
        v8->fields._nobleDataPath_5__2 = v60;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._nobleDataPath_5__2,
          (int64_t)v60,
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
      v69 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v69,
        (Il2CppObject *)v67,
        Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)AssetManager__loadAssetStorage(
                                                                               v68,
                                                                               v69,
                                                                               1,
                                                                               0LL);
LABEL_27:
      v70 = v8->fields.__8__1;
      if ( !v70 )
        goto LABEL_79;
      isNext = v70->fields.isNext;
      v8->fields.__2__current = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_79;
      this->fields.__4__this = 0LL;
      p__4__this = &this->fields.__4__this;
      *((_BYTE *)p__4__this - 8) = 0;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__4__this, 0LL, v2, v3, v4, v5, v6, v7);
      v73 = v8->fields._nobleDataPath_5__2;
      v74 = (Il2CppObject *)v8->fields.__8__1;
      v75 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v75,
        v74,
        Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)AssetManager__loadAssetStorage(
                                                                               v73,
                                                                               v75,
                                                                               1,
                                                                               0LL);
LABEL_35:
      v76 = v8->fields.__8__1;
      if ( !v76 )
        goto LABEL_79;
      if ( v76->fields.isNext )
      {
        sequence = (UnityEngine_Object_o *)v76->fields.sequence;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(sequence, 0LL, 0LL) )
        {
LABEL_69:
          v8->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(p__2__current, 0LL, v78, v79, v80, v81, v82, v83);
          v92 = 5;
          goto LABEL_75;
        }
        v84 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v84,
          (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v84;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)DataManager__GetMasterData_object_(
                                                                                   (DataManager_o *)this,
                                                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          if ( this )
          {
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                     (TreasureDvcLvMaster_o *)this,
                                                                                     &entity,
                                                                                     v8->fields.treasureDvcId,
                                                                                     v8->fields.treasureDvcLv,
                                                                                     0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_79;
              funcId = entity->fields.funcId;
              if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
              BattleEffectUtility__AddRelatedFunctionEffectIdList(funcId, &effectIdList, 0LL);
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)entity;
              if ( !entity )
                goto LABEL_79;
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                       entity,
                                                                                       0LL);
              if ( (int)this >= 1 )
              {
                v86 = (int)this;
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)sub_1C21EE0(int___TypeInfo, 1LL);
                if ( !this )
                  goto LABEL_79;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.__2__current) )
                  goto LABEL_80;
                LODWORD(this->fields.__4__this) = v86;
                if ( !_4__this )
                  goto LABEL_79;
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                         _4__this,
                                                                                         (System_Int32_array *)this,
                                                                                         0LL);
              }
            }
            v87 = v8->fields.__8__1;
            if ( v87 )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v87->fields.sequence;
              if ( this )
              {
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                                         (UnityEngine_GameObject_o *)this,
                                                                                         (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
                if ( this )
                {
                  _2__current = (int)this->fields.__2__current;
                  v89 = this;
                  if ( _2__current >= 1 )
                  {
                    v90 = 0LL;
                    while ( (unsigned int)v90 < _2__current )
                    {
                      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)*((_QWORD *)&v89->fields.__4__this
                                                                                             + v90);
                      if ( !this )
                        goto LABEL_79;
                      WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                        (WellFired_USFGOActorBattleActionEvent_o *)this,
                        &effectIdList,
                        0LL);
                      _2__current = (int)v89->fields.__2__current;
                      if ( (int)++v90 >= _2__current )
                        goto LABEL_60;
                    }
LABEL_80:
                    sub_1C2209C(this, method);
                  }
                }
LABEL_60:
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)effectIdList;
                if ( effectIdList )
                {
                  this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)System_Collections_Generic_List_int___ToArray(
                                                                                           effectIdList,
                                                                                           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( _4__this )
                  {
                    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                             _4__this,
                                                                                             (System_Int32_array *)this,
                                                                                             0LL);
                    if ( _4__this->fields.nobleEffectList )
                    {
                      System_Collections_Generic_List_object___AddRange(
                        (System_Collections_Generic_List_object__o *)_4__this->fields.nobleEffectList,
                        (System_Collections_Generic_IEnumerable_T__o *)this,
                        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_65:
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                      if ( ServantAssetLoadManager__checkLoad(0LL) )
                      {
                        v8->fields.__2__current = 0LL;
                        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                        sub_1C21DDC(p__2__current, 0LL, v78, v79, v80, v81, v82, v83);
                        v92 = 4;
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
        sub_1C22094(this, method);
      }
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      v92 = 3;
LABEL_75:
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v92;
      return 1;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_35;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_65;
    case 5:
      v93 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v93 )
        goto LABEL_79;
      callback = v8->fields.callback;
      if ( !callback )
        goto LABEL_79;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct UnityEngine_GameObject_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        v93->fields.sequence,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156__System_IDisposable_Dispose(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *this,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A62D64;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A62D44;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A62CFC;
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
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v6, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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