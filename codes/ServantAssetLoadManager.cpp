void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_object__object__o *v10; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  void *v18; // x1
  struct ServantAssetLoadManager_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B154BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B154BC = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo,
                                                                     v1,
                                                                     v2,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v10;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->unloadIgnoredAssetArgs,
    (int64_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_1/*""*/;
  v19 = ServantAssetLoadManager_TypeInfo->static_fields;
  v19->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->wkSpace, (int64_t)v18, v20, v21, v22, v23, v24, v25);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_Dictionary_int__object__o *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_Dictionary_int__object__o *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_object__o *v75; // x20
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Collections_Generic_List_object__o *v85; // x20
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Collections_Generic_Dictionary_object__object__o *v95; // x20
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7

  if ( (byte_4B154BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__Object__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_AssetData__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__, v23, v24);
    byte_4B154BB = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadedList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadlist, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.downloadlist, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  v55 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo,
                                                                  v52,
                                                                  v53,
                                                                  v54);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v55,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ActorVoice, (int64_t)v55, v56, v57, v58, v59, v60, v61);
  v65 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__string__TypeInfo,
                                                                  v62,
                                                                  v63,
                                                                  v64);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v65,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v65;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.LastActorVoice, (int64_t)v65, v66, v67, v68, v69, v70, v71);
  v75 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AssetData__TypeInfo,
                                                       v72,
                                                       v73,
                                                       v74);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v75;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgAssetDataList, (int64_t)v75, v76, v77, v78, v79, v80, v81);
  v85 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v82,
                                                       v83,
                                                       v84);
  System_Collections_Generic_List_object____ctor(
    v85,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v85;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nobleEffectList, (int64_t)v85, v86, v87, v88, v89, v90, v91);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v95 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__Object__TypeInfo,
                                                                     v92,
                                                                     v93,
                                                                     v94);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v95,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v95;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._releaseAssets, (int64_t)v95, v96, v97, v98, v99, v100, v101);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_4B154B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, path, method);
    byte_4B154B5 = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    sub_1BCAA3C(0LL, path);
  return System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           (Il2CppObject *)path,
           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
}


void __fastcall ServantAssetLoadManager__DebugPrint(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (ServantAssetLoadManager_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_1BCAA3C(this, data);
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1544C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, method, v2);
    byte_4B1544C = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_object__object__o *Instance; // x0
  __int64 v19; // x1
  ServantAssetLoadManager_c *v20; // x0
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  ServantAssetArgs_o *currentValue; // x19
  int32_t v24; // w24
  ServantAssetLoadManager_c *v25; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B154B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__,
      v10,
      v11);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14, v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__,
      v16,
      v17);
    byte_4B154B4 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(Instance[1].fields._syncRoot) = 3;
  v20 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v19);
    v20 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v20->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          Instance,
                                                                          (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v21 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v27,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v21 )
      break;
    currentValue = (ServantAssetArgs_o *)v27.fields._currentValue;
    if ( !v27.fields._currentValue )
      sub_1BCAA3C(v21, v22);
    if ( SHIDWORD(v27.fields._currentValue[5].monitor) >= 1 )
    {
      v24 = 0;
      do
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v22);
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v22);
        ++v24;
      }
      while ( v24 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v27,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v25 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v19);
    v25 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v25->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_22:
    sub_1BCAA3C(Instance, v19);
  System_Collections_Generic_Dictionary_object__object___Clear(
    Instance,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
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
  __int64 v10; // x1
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_4B15464 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    byte_4B15464 = 1;
  }
  PreloadBattleActorFolderName = ServantAssetLoadManager__GetPreloadBattleActorFolderName(
                                   this,
                                   svtId,
                                   limitCount,
                                   appearanceId,
                                   isForce,
                                   method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
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

  if ( (byte_4B15495 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&limit,
      *(_QWORD *)&overwriteSvtVoiceId);
    byte_4B15495 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t VoicePrefix; // w24
  const MethodInfo *v20; // x3
  int32_t VoiceId; // w0
  int32_t v22; // w9
  __int64 v23; // x1
  Il2CppObject *v24; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v26; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x1
  int32_t v32; // [xsp+8h] [xbp-68h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B15496 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limit);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Voice_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_25198/*"{0:D0}_{1}"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12818/*"Servants_"*/, v17, v18);
    byte_4B15496 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v20);
  if ( overwriteSvtVoiceId )
    v22 = overwriteSvtVoiceId;
  else
    v22 = VoiceId;
  v32 = VoicePrefix;
  v33 = v22;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v23);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0LL);
  v26 = System_String__Format_62415592((System_String_o *)StringLiteral_25198/*"{0:D0}_{1}"*/, v24, FileName, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v28 = System_Int32__ToString((int32_t)&v33, 0LL);
  v29 = System_String__Concat_62401220((System_String_o *)StringLiteral_12818/*"Servants_"*/, v28, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v29, v30);
  return SoundManager__IsExistsSound((SoundManager_o *)Instance, v29, v26, 0LL);
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

  if ( (byte_4B154A0 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager__GetAheadBg_d__158_TypeInfo, bgList, callback);
    byte_4B154A0 = 1;
  }
  v7 = sub_1BCAA2C(ServantAssetLoadManager__GetAheadBg_d__158_TypeInfo, bgList, callback, method);
  ServantAssetLoadManager__GetAheadBg_d__158___ctor((ServantAssetLoadManager__GetAheadBg_d__158_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)bgList, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B154B2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_4684/*"CommandCodes/Texture/"*/, v4, v5);
    byte_4B154B2 = 1;
  }
  v8 = commandCodeId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat((Il2CppObject *)StringLiteral_4684/*"CommandCodes/Texture/"*/, v6, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B15499 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B15499 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal((ServantAssetLoadManager_o *)Instance, uniqueId, v6);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v11; // x0

  if ( (byte_4B1549A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__, *(_QWORD *)&uniqueId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v7, v8);
    byte_4B1549A = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                  (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_10:
    sub_1BCAA3C(LastActorVoice, *(_QWORD *)&uniqueId);
  }
  v11 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&uniqueId);
    v11 = ServantAssetLoadManager_TypeInfo;
  }
  return v11->static_fields->wkSpace;
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
  if ( (byte_4B1542F & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&limitDiff);
    byte_4B1542F = 1;
  }
  if ( v5 <= 10 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    return ImageLimitCount__GetImageLimitCount(svtId, v5, 0LL) + limitDiff;
  }
  return v5;
}


int32_t __fastcall ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B154B6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_Path_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v3, v4);
    byte_4B154B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  klass = Instance[7].klass;
  if ( !klass )
    return 0;
  result = 0;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v6);
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
  Il2CppObject *v11; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B15492 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&servantId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&StringLiteral_25198/*"{0:D0}_{1}"*/, v9, v10);
    byte_4B15492 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
  return System_String__Format_62415592((System_String_o *)StringLiteral_25198/*"{0:D0}_{1}"*/, v11, (Il2CppObject *)voiceId, 0LL);
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

  if ( (byte_4B15463 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    byte_4B15463 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
  if ( appearanceId < 1 )
  {
    v10 = svtId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_38651152(v10, *(const MethodInfo **)&svtId);
  }
  else
  {
    v10 = appearanceId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_38651152(v10, *(const MethodInfo **)&svtId);
  }
  return ServantAssetLoadManager__getActorFolderName(v10, limitCount, *(const MethodInfo **)&limitCount);
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceChocoShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ServantAssetLoadManager___c_c *v15; // x0
  System_Func_T1__T2__TResult__o *_9__98_0; // x20
  Il2CppObject *v17; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Object_array *ComponentsInChildren_object__49689332; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  Il2CppObject *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3

  if ( (byte_4B1546D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleServantDeadComponent_getReplaceChocoShader__, method, v2);
    sub_1BCA7E0(&System_Func_Shader__Shader__Shader__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__98_0__, v11, v12);
    sub_1BCA7E0(&ServantAssetLoadManager___c_TypeInfo, v13, v14);
    byte_4B1546D = 1;
  }
  v15 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo, method);
    v15 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__98_0 = (System_Func_T1__T2__TResult__o *)v15->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, method);
      v15 = ServantAssetLoadManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                   System_Func_Shader__Shader__Shader__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v17,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__98_0__,
      0LL);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__98_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__98_0,
      (int64_t)_9__98_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !obj )
    sub_1BCAA3C(v15, method);
  ComponentsInChildren_object__49689332 = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                            obj,
                                            (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__49689332
    && (v27 = *(_QWORD *)&ComponentsInChildren_object__49689332->max_length) != 0 )
  {
    if ( !(_DWORD)v27 )
      sub_1BCAA44(ComponentsInChildren_object__49689332, v26);
    v28 = ComponentsInChildren_object__49689332->m_Items[0];
  }
  else
  {
    v28 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
  {
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                   System_Func_Shader__Shader__Shader__TypeInfo,
                                                   v29,
                                                   v30,
                                                   v31);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v28,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      0LL);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__98_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ServantAssetLoadManager___c_c *v15; // x0
  System_Func_T1__T2__TResult__o *_9__97_0; // x20
  Il2CppObject *v17; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Object_array *ComponentsInChildren_object__49689332; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  Il2CppObject *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3

  if ( (byte_4B1546C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleServantDeadComponent_getReplaceDeadShader__, method, v2);
    sub_1BCA7E0(&System_Func_Shader__Shader__Shader__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__97_0__, v11, v12);
    sub_1BCA7E0(&ServantAssetLoadManager___c_TypeInfo, v13, v14);
    byte_4B1546C = 1;
  }
  v15 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo, method);
    v15 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__97_0 = (System_Func_T1__T2__TResult__o *)v15->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, method);
      v15 = ServantAssetLoadManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__97_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                   System_Func_Shader__Shader__Shader__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
    System_Func_object__object__object____ctor(
      _9__97_0,
      v17,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__97_0__,
      0LL);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__97_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__97_0,
      (int64_t)_9__97_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !obj )
    sub_1BCAA3C(v15, method);
  ComponentsInChildren_object__49689332 = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                            obj,
                                            (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__49689332
    && (v27 = *(_QWORD *)&ComponentsInChildren_object__49689332->max_length) != 0 )
  {
    if ( !(_DWORD)v27 )
      sub_1BCAA44(ComponentsInChildren_object__49689332, v26);
    v28 = ComponentsInChildren_object__49689332->m_Items[0];
  }
  else
  {
    v28 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
  {
    _9__97_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                   System_Func_Shader__Shader__Shader__TypeInfo,
                                                   v29,
                                                   v30,
                                                   v31);
    System_Func_object__object__object____ctor(
      _9__97_0,
      v28,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      0LL);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__97_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantData_o *v3; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v6; // x0

  v3 = data;
  if ( (byte_4B15451 & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, method, v2);
    byte_4B15451 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(data, method);
  if ( v3->fields.isEnemy || v3->fields.followerType )
    return v3->fields.isEnemy;
  uniqueId = v3->fields.uniqueId;
  v6 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
    v6 = ServantAssetLoadManager_TypeInfo;
  }
  return uniqueId <= v6->static_fields->KeepAssetPlayerServantCount;
}


bool __fastcall ServantAssetLoadManager__IsKeepAssetAvailable(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  Il2CppClass *v16; // x19
  Il2CppClass *element_class; // x8

  if ( (byte_4B154B3 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&OptionManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_6511/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, v9, v10);
    byte_4B154B3 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6511/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11);
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  klass = Instance[2].klass;
  if ( klass
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)methodPtr_low) )
  {
    if ( *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
      v16 = Instance[2].klass;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v16 || (element_class = v16->_1.element_class) == 0LL )
LABEL_21:
    sub_1BCAA3C(Instance, v13);
  return BYTE4(element_class->vtable[25].methodPtr);
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B1549D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6, v7);
    byte_4B1549D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)Instance[5].klass;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)Instance,
         uniqueId,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)Instance[5].klass;
      if ( Instance )
      {
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                     uniqueId,
                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance[2].monitor) != 0;
      }
    }
LABEL_11:
    sub_1BCAA3C(Instance, v9);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
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
  __int64 v16; // x1
  UnityEngine_MonoBehaviour_o *v17; // x26
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B1549E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    byte_4B1549E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v16);
  v17 = (UnityEngine_MonoBehaviour_o *)Instance;
  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          (ServantAssetLoadManager_o *)Instance,
                                          parent,
                                          svtId,
                                          limitCount,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          npChargeStage,
                                          callback,
                                          v19);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(v17, Manager__loadNoblePhantasmCoroutine, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x20
  int32_t v19; // w21

  if ( (byte_4B1544B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, dlOnly, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v7, v8);
    byte_4B1544B = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, dlOnly);
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
LABEL_24:
    sub_1BCAA3C(Item, v10);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v10);
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v11);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v10);
    ServantAssetLoadManager__preloadWeaponEffect(
      WeaponEffectId_k__BackingField,
      EffectFolder_k__BackingField,
      dlOnly,
      v12);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v10);
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v11);
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v17);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v19 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v19,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v19,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Item->klass->vtable[8].method)(
          Item,
          dlOnly,
          Item->klass->vtable[9].methodPtr);
      }
      ++v19;
    }
    while ( v19 < skillList_k__BackingField->fields._size );
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

  if ( (byte_4B15469 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, args, dlOnly);
    byte_4B15469 = 1;
  }
  effectPath = 0LL;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, args);
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
  __int64 v3; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B1549B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v3);
    byte_4B1549B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  ServantAssetLoadManager__localStopVoice((ServantAssetLoadManager_o *)Instance, uniqueId, fadeoutTime, v8);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  BattleDeckServantData_o *deckSvt_k__BackingField; // x8
  int32_t DisplayType_k__BackingField; // w20
  NpcServantDisplayTypeDetailMaster_o *v19; // x21
  char BattleCommonEffectPath; // w0
  int32_t effectId; // w20
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1546B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, effectPath, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    byte_4B1546B = 1;
  }
  entity = 0LL;
  *effectPath = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)effectPath, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !args || !args->fields._deckSvt_k__BackingField )
    goto LABEL_11;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
  deckSvt_k__BackingField = args->fields._deckSvt_k__BackingField;
  if ( !deckSvt_k__BackingField )
    goto LABEL_17;
  DisplayType_k__BackingField = args->fields._DisplayType_k__BackingField;
  v19 = (NpcServantDisplayTypeDetailMaster_o *)Master_object;
  Master_object = (Il2CppObject *)BattleDeckServantData__GetDisplayColorType(deckSvt_k__BackingField, 0LL);
  if ( !v19 )
    goto LABEL_17;
  NpcServantDisplayTypeDetailMaster__TryGetEntity(
    v19,
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
    sub_1BCAA3C(Master_object, v16);
  effectId = entity->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v16);
  BattleCommonEffectPath = BattleEffectUtility__TryGetBattleCommonEffectPath(effectPath, effectId, 0LL);
  return BattleCommonEffectPath & 1;
}


bool __fastcall ServantAssetLoadManager__TryRegisterUnloadIgnoredArgs(
        ServantAssetArgs_o *args,
        const MethodInfo *method)
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
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  bool IsKeepAssetAvailable; // w20
  System_Collections_Generic_Dictionary_object__object__o *v15; // x21
  __int64 v16; // x1
  ServantAssetLoadManager_c *v17; // x0
  System_Collections_Generic_Dictionary_object__object__o *unloadIgnoredAssetArgs; // x21
  ServantAssetLoadManager_c *v19; // x0
  System_Collections_Generic_Dictionary_object__object__o *v20; // x21

  if ( (byte_4B1544E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__, v6, v7);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10, v11);
    byte_4B1544E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  IsKeepAssetAvailable = ServantAssetLoadManager__IsKeepAssetAvailable(Instance, v13);
  if ( IsKeepAssetAvailable )
  {
    Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager_TypeInfo;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v13);
      Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager_TypeInfo;
    }
    if ( args )
    {
      v15 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(_QWORD *)&Instance[1].fields.m_CachedPtr
                                                                        + 8LL);
      Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
      if ( v15 )
      {
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v15,
                (Il2CppObject *)Instance,
                (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v17 = ServantAssetLoadManager_TypeInfo;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v16);
            v17 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_object__object__o *)v17->static_fields->unloadIgnoredAssetArgs;
          Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_20;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            unloadIgnoredAssetArgs,
            (Il2CppObject *)Instance,
            (Il2CppObject *)args,
            (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v19 = ServantAssetLoadManager_TypeInfo;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v16);
          v19 = ServantAssetLoadManager_TypeInfo;
        }
        v20 = (System_Collections_Generic_Dictionary_object__object__o *)v19->static_fields->unloadIgnoredAssetArgs;
        Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
        if ( v20 )
        {
          Instance = (ServantAssetLoadManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    v20,
                                                    (Il2CppObject *)Instance,
                                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++HIDWORD(Instance->fields.LastActorVoice);
            return IsKeepAssetAvailable;
          }
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(Instance, v13);
  }
  return IsKeepAssetAvailable;
}


void __fastcall ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4B154A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__, v10, v11);
    byte_4B154A2 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v13,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v13.fields._current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void __fastcall ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Item; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x19
  int32_t v17; // w20

  if ( (byte_4B1544D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v4, v5);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v6, v7);
    byte_4B1544D = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
LABEL_24:
    sub_1BCAA3C(Item, v9);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9);
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v9);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9);
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v10);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9);
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v9);
  ServantAssetLoadManager__unloadFromDeckServant(args->fields._deckSvt_k__BackingField, v15);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v17 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v17,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v17,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[9].method)(
          Item,
          Item->klass->vtable[10].methodPtr);
      }
      ++v17;
    }
    while ( v17 < skillList_k__BackingField->fields._size );
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
  if ( (byte_4B154B1 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, commandCodeIds, method);
    byte_4B154B1 = 1;
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
          sub_1BCAA44(this, commandCodeIds);
        v7 = commandCodeIds->m_Items[v6 + 1];
        if ( v7 >= 1 )
        {
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, commandCodeIds);
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

  if ( (byte_4B1546A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, args, method);
    byte_4B1546A = 1;
  }
  effectPath = 0LL;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, args);
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

  if ( (byte_4B154BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__Add__, data, method);
    byte_4B154BD = 1;
  }
  bgAssetDataList = (System_Collections_Generic_List_object__o *)this->fields.bgAssetDataList;
  if ( !bgAssetDataList
    || (items = bgAssetDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++bgAssetDataList->fields._version,
        !items) )
  {
    sub_1BCAA3C(bgAssetDataList, data);
  }
  size = bgAssetDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgAssetDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    bgAssetDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *v3; // x23
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v31; // x25
  unsigned __int64 v32; // x19
  UnityEngine_Object_o *v33; // x20
  float v34; // s13
  float v35; // s14
  float v36; // s15
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v39; // x20
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v42; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  UnityEngine_GameObject_c *v44; // x8
  UnityEngine_GameObject_o *v45; // x23
  unsigned __int64 v46; // x27
  UnityEngine_Object_o *v47; // x24
  int v48; // w8
  UnityEngine_GameObject_o *v49; // x25
  unsigned int v50; // w19
  UnityEngine_GameObject_c **v51; // x8
  UnityEngine_Material_o *v52; // x26
  UnityEngine_Shader_o *v53; // x0
  int v54; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v60; // s8
  float v61; // s9
  float v62; // s10
  float v63; // s8
  float v64; // s9
  float v65; // s10
  float v66; // s8
  UnityEngine_GameObject_o *v67; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v71; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v72; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = obj;
  if ( (byte_4B1546F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v6, v7);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16342/*"_ClipSharpnessY"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21176/*"joint_all_Base"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_24923/*"weapon"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_16561/*"_Use_alphawidth"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_5023/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_17528/*"body"*/, v26, v27);
    obj = (UnityEngine_GameObject_o *)sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v28, v29);
    byte_4B1546F = 1;
  }
  if ( !v3 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                      v3,
                                      (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v31 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v34 = 0.0;
    v35 = 0.0;
    v36 = 0.0;
    g = 1.0;
    r = 1.0;
    b = 1.0;
    goto LABEL_13;
  }
  v32 = 0LL;
  while ( 1 )
  {
    if ( v32 >= (unsigned int)klass )
      goto LABEL_54;
    v33 = (UnityEngine_Object_o *)*((_QWORD *)&v31[1].monitor + v32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v31[1].klass;
    if ( (__int64)++v32 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v33 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v33, 0LL);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_70020424(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16346/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v33, 0LL);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16346/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v33, 0LL);
  if ( !obj )
LABEL_53:
    sub_1BCAA3C(obj, method);
  if ( UnityEngine_Material__HasProperty_70020424(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16302/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v33, 0LL);
    if ( obj )
    {
      v78 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, 0LL);
      v36 = v78.fields.r;
      v35 = v78.fields.g;
      v34 = v78.fields.b;
      a = v78.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v34 = 0.0;
  v35 = 0.0;
  v36 = 0.0;
LABEL_13:
  v39 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5023/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
             (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(v3, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_21176/*"joint_all_Base"*/, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v42);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v3, v42);
  v44 = v31[1].klass;
  if ( (int)v44 >= 1 )
  {
    v45 = obj;
    v46 = 0LL;
    v67 = v31;
    while ( 1 )
    {
      if ( v46 >= (unsigned int)v44 )
        goto LABEL_54;
      v47 = (UnityEngine_Object_o *)*((_QWORD *)&v31[1].monitor + v46);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v47, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v47 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v47, 0LL);
        if ( !obj )
          goto LABEL_53;
        v48 = (int)obj[1].klass;
        v49 = obj;
        if ( v48 >= 1 )
          break;
      }
LABEL_41:
      v31 = v67;
      ++v46;
      LODWORD(v44) = v67[1].klass;
      if ( (__int64)v46 >= (int)v44 )
        return;
    }
    v50 = 0;
    while ( v50 < v48 )
    {
      v51 = &v49->klass + (int)v50;
      v52 = (UnityEngine_Material_o *)v51[4];
      if ( !v52 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v51[4], 0LL);
      if ( !v45 )
        goto LABEL_53;
      v53 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(_QWORD, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))v45[1].klass)(
                                      *(_QWORD *)&v45[2].fields.m_CachedPtr,
                                      obj,
                                      v39,
                                      *(_QWORD *)&v45[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v52, v53, 0LL);
      v75.fields.b = b;
      v75.fields.a = value;
      v75.fields.r = r;
      v75.fields.g = g;
      UnityEngine_Material__SetColor(v52, (System_String_o *)StringLiteral_16346/*"_Color"*/, v75, 0LL);
      v76.fields.a = a;
      v76.fields.r = v36;
      v76.fields.g = v35;
      v76.fields.b = v34;
      UnityEngine_Material__SetColor(v52, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v76, 0LL);
      UnityEngine_Material__SetTexture(
        v52,
        (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
        (UnityEngine_Texture_o *)object,
        0LL);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17528/*"body"*/, 0LL) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_24923/*"weapon"*/, 0LL) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v47,
                                            0LL);
        if ( !obj )
          goto LABEL_53;
        *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0LL);
        if ( !NodeFromName )
          goto LABEL_53;
        v73 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v54, 0LL);
        x = v73.fields.x;
        y = v73.fields.y;
        z = v73.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v60 = x - localPosition.fields.x;
        v61 = y - localPosition.fields.y;
        v62 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v72, (UnityEngine_Renderer_o *)v47, 0LL);
        v63 = v60 + v72.fields.m_Center.fields.x;
        v64 = v61 + v72.fields.m_Center.fields.y;
        v65 = v62 + v72.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v72, (UnityEngine_Renderer_o *)v47, 0LL);
        v71.fields.m_Center.fields.x = v63;
        v71.fields.m_Center.fields.y = v64;
        v71.fields.m_Center.fields.z = v65;
        *(float32x2_t *)&v71.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v72.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v72.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v71.fields.m_Extents.fields.z = (float)(v72.fields.m_Extents.fields.z + v72.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v47, &v71, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v47, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v72, (UnityEngine_Renderer_o *)v47, 0LL);
        v66 = v72.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v72, (UnityEngine_Renderer_o *)v47, 0LL);
        UnityEngine_Material__SetFloat(
          v52,
          (System_String_o *)StringLiteral_16342/*"_ClipSharpnessY"*/,
          v66 - v72.fields.m_Extents.fields.y,
          0LL);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_70020424(
                                          v52,
                                          (System_String_o *)StringLiteral_16561/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v52, (System_String_o *)StringLiteral_16561/*"_Use_alphawidth"*/, 1.0, 0LL);
      v48 = (int)v49[1].klass;
      if ( (int)++v50 >= v48 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1BCAA44(obj, method);
  }
}


void __fastcall ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *v3; // x19
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v23; // x21
  float a; // s9
  float v25; // s8
  unsigned __int64 v26; // x23
  UnityEngine_Object_o *v27; // x20
  float v28; // s13
  float v29; // s14
  float v30; // s15
  float b; // s10
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v34; // x20
  const MethodInfo *v35; // x1
  Il2CppObject *object; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  UnityEngine_GameObject_c *v38; // x8
  UnityEngine_GameObject_o *v39; // x9
  unsigned __int64 v40; // x28
  UnityEngine_GameObject_o *v41; // x26
  UnityEngine_Object_o *v42; // x23
  int v43; // w8
  UnityEngine_GameObject_o *v44; // x23
  unsigned int v45; // w19
  UnityEngine_GameObject_c **v46; // x8
  UnityEngine_Material_o *v47; // x24
  UnityEngine_Shader_o *v48; // x0
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = obj;
  if ( (byte_4B15470 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v6, v7);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_5022/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16561/*"_Use_alphawidth"*/, v18, v19);
    obj = (UnityEngine_GameObject_o *)sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v20, v21);
    byte_4B15470 = 1;
  }
  if ( !v3 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                      v3,
                                      (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  klass = obj[1].klass;
  v23 = obj;
  a = 1.0;
  v25 = 0.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    goto LABEL_13;
  }
  v26 = 0LL;
  while ( 1 )
  {
    if ( v26 >= (unsigned int)klass )
      goto LABEL_45;
    v27 = (UnityEngine_Object_o *)*((_QWORD *)&v23[1].monitor + v26);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v23[1].klass;
    if ( (__int64)++v26 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v27 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
  if ( !obj )
    goto LABEL_44;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( UnityEngine_Material__HasProperty_70020424(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16346/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
    if ( !obj )
      goto LABEL_44;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16346/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
  if ( !obj )
LABEL_44:
    sub_1BCAA3C(obj, method);
  if ( UnityEngine_Material__HasProperty_70020424(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16302/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
    if ( !obj )
      goto LABEL_44;
    v52 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, 0LL);
    v25 = v52.fields.r;
    v28 = v52.fields.g;
    v29 = v52.fields.b;
    v30 = v52.fields.a;
  }
  else
  {
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
  }
LABEL_13:
  v34 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5022/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
             (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v35);
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(v3, v35);
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                      v3,
                                      (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  v38 = obj[1].klass;
  v39 = obj;
  if ( (int)v38 >= 1 )
  {
    v40 = 0LL;
    while ( 1 )
    {
      if ( v40 >= (unsigned int)v38 )
        goto LABEL_45;
      v41 = v39;
      v42 = (UnityEngine_Object_o *)*((_QWORD *)&v39[1].monitor + v40);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v42, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v42 )
          goto LABEL_44;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v42, 0LL);
        if ( !obj )
          goto LABEL_44;
        v43 = (int)obj[1].klass;
        v44 = obj;
        if ( v43 >= 1 )
          break;
      }
LABEL_32:
      LODWORD(v38) = v41[1].klass;
      ++v40;
      v39 = v41;
      if ( (__int64)v40 >= (int)v38 )
        return;
    }
    v45 = 0;
    while ( v45 < v43 )
    {
      v46 = &v44->klass + (int)v45;
      v47 = (UnityEngine_Material_o *)v46[4];
      if ( !v47 )
        goto LABEL_44;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v46[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_44;
      v48 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))ReplaceChocoShaderFunc->fields.m_target)(
                                      ReplaceChocoShaderFunc->fields.original_method_info,
                                      obj,
                                      v34,
                                      *(_QWORD *)&ReplaceChocoShaderFunc->fields.extra_arg);
      UnityEngine_Material__set_shader(v47, v48, 0LL);
      v49.fields.r = r;
      v49.fields.g = g;
      v49.fields.b = b;
      v49.fields.a = a;
      UnityEngine_Material__SetColor(v47, (System_String_o *)StringLiteral_16346/*"_Color"*/, v49, 0LL);
      v50.fields.r = v25;
      v50.fields.g = v28;
      v50.fields.b = v29;
      v50.fields.a = v30;
      UnityEngine_Material__SetColor(v47, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v50, 0LL);
      UnityEngine_Material__SetTexture(
        v47,
        (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
        (UnityEngine_Texture_o *)object,
        0LL);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_70020424(
                                          v47,
                                          (System_String_o *)StringLiteral_16561/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v47, (System_String_o *)StringLiteral_16561/*"_Use_alphawidth"*/, 1.0, 0LL);
      v43 = (int)v44[1].klass;
      if ( (int)++v45 >= v43 )
        goto LABEL_32;
    }
LABEL_45:
    sub_1BCAA44(obj, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *v3; // x22
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v25; // x23
  unsigned __int64 v26; // x19
  UnityEngine_Object_o *v27; // x20
  float v28; // s13
  float v29; // s14
  float v30; // s15
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v33; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v35; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  UnityEngine_GameObject_c *v37; // x8
  UnityEngine_GameObject_o *v38; // x22
  unsigned __int64 v39; // x29
  UnityEngine_Object_o *v40; // x23
  int v41; // w8
  UnityEngine_GameObject_o *v42; // x24
  unsigned int v43; // w27
  UnityEngine_GameObject_c **v44; // x8
  UnityEngine_Material_o *v45; // x25
  UnityEngine_Shader_o *v46; // x0
  int v47; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v53; // s8
  float v54; // s9
  float v55; // s10
  float v56; // s8
  float v57; // s9
  float v58; // s10
  float v59; // s8
  UnityEngine_GameObject_o *v60; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v64; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v65; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = obj;
  if ( (byte_4B1546E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_16342/*"_ClipSharpnessY"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5021/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21176/*"joint_all_Base"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24923/*"weapon"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16561/*"_Use_alphawidth"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_17528/*"body"*/, v20, v21);
    obj = (UnityEngine_GameObject_o *)sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v22, v23);
    byte_4B1546E = 1;
  }
  if ( !v3 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                      v3,
                                      (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v25 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
    g = 1.0;
    r = 1.0;
    b = 1.0;
    goto LABEL_13;
  }
  v26 = 0LL;
  while ( 1 )
  {
    if ( v26 >= (unsigned int)klass )
      goto LABEL_54;
    v27 = (UnityEngine_Object_o *)*((_QWORD *)&v25[1].monitor + v26);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v25[1].klass;
    if ( (__int64)++v26 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v27 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_70020424(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16346/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16346/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
  if ( !obj )
LABEL_53:
    sub_1BCAA3C(obj, method);
  if ( UnityEngine_Material__HasProperty_70020424(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16302/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
    if ( obj )
    {
      v71 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, 0LL);
      v30 = v71.fields.r;
      v29 = v71.fields.g;
      v28 = v71.fields.b;
      a = v71.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
LABEL_13:
  v33 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5021/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(v3, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_21176/*"joint_all_Base"*/, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v35);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v3, v35);
  v37 = v25[1].klass;
  if ( (int)v37 >= 1 )
  {
    v38 = obj;
    v39 = 0LL;
    v60 = v25;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)v37 )
        goto LABEL_54;
      v40 = (UnityEngine_Object_o *)*((_QWORD *)&v25[1].monitor + v39);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v40 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v40, 0LL);
        if ( !obj )
          goto LABEL_53;
        v41 = (int)obj[1].klass;
        v42 = obj;
        if ( v41 >= 1 )
          break;
      }
LABEL_41:
      v25 = v60;
      ++v39;
      LODWORD(v37) = v60[1].klass;
      if ( (__int64)v39 >= (int)v37 )
        return;
    }
    v43 = 0;
    while ( v43 < v41 )
    {
      v44 = &v42->klass + (int)v43;
      v45 = (UnityEngine_Material_o *)v44[4];
      if ( !v45 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v44[4], 0LL);
      if ( !v38 )
        goto LABEL_53;
      v46 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(_QWORD, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))v38[1].klass)(
                                      *(_QWORD *)&v38[2].fields.m_CachedPtr,
                                      obj,
                                      v33,
                                      *(_QWORD *)&v38[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v45, v46, 0LL);
      v68.fields.b = b;
      v68.fields.a = value;
      v68.fields.r = r;
      v68.fields.g = g;
      UnityEngine_Material__SetColor(v45, (System_String_o *)StringLiteral_16346/*"_Color"*/, v68, 0LL);
      v69.fields.a = a;
      v69.fields.r = v30;
      v69.fields.g = v29;
      v69.fields.b = v28;
      UnityEngine_Material__SetColor(v45, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v69, 0LL);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17528/*"body"*/, 0LL) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_24923/*"weapon"*/, 0LL) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v40,
                                            0LL);
        if ( !obj )
          goto LABEL_53;
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0LL);
        if ( !NodeFromName )
          goto LABEL_53;
        v66 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v47, 0LL);
        x = v66.fields.x;
        y = v66.fields.y;
        z = v66.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v53 = x - localPosition.fields.x;
        v54 = y - localPosition.fields.y;
        v55 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v65, (UnityEngine_Renderer_o *)v40, 0LL);
        v56 = v53 + v65.fields.m_Center.fields.x;
        v57 = v54 + v65.fields.m_Center.fields.y;
        v58 = v55 + v65.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v65, (UnityEngine_Renderer_o *)v40, 0LL);
        v64.fields.m_Center.fields.x = v56;
        v64.fields.m_Center.fields.y = v57;
        v64.fields.m_Center.fields.z = v58;
        *(float32x2_t *)&v64.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v65.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v65.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v64.fields.m_Extents.fields.z = (float)(v65.fields.m_Extents.fields.z + v65.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v40, &v64, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v40, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v65, (UnityEngine_Renderer_o *)v40, 0LL);
        v59 = v65.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v65, (UnityEngine_Renderer_o *)v40, 0LL);
        UnityEngine_Material__SetFloat(
          v45,
          (System_String_o *)StringLiteral_16342/*"_ClipSharpnessY"*/,
          v59 - v65.fields.m_Extents.fields.y,
          0LL);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_70020424(
                                          v45,
                                          (System_String_o *)StringLiteral_16561/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v45, (System_String_o *)StringLiteral_16561/*"_Use_alphawidth"*/, 1.0, 0LL);
      v41 = (int)v42[1].klass;
      if ( (int)++v43 >= v41 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1BCAA44(obj, method);
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

  if ( (byte_4B15497 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&limit,
      *(_QWORD *)&overwriteSvtVoiceId);
    byte_4B15497 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v12);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  ServantEntity_o *SvtEntity; // x25
  const MethodInfo *v22; // x3
  int32_t VoicePrefix; // w26
  const MethodInfo *v24; // x3
  int32_t VoiceId; // w0
  int32_t v26; // w9
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 *v29; // x8
  System_String_o *v30; // x20
  System_String_o *v31; // x19
  System_String_o *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x19
  int32_t v37; // [xsp+8h] [xbp-58h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B15498 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limit);
    sub_1BCA7E0(&SoundManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_9637/*"NoblePhantasm_"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_25198/*"{0:D0}_{1}"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12818/*"Servants_"*/, v19, v20);
    byte_4B15498 = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v22);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v24);
  if ( overwriteSvtVoiceId )
    v26 = overwriteSvtVoiceId;
  else
    v26 = VoiceId;
  v37 = VoicePrefix;
  v38 = v26;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v28 = System_String__Format_62415592((System_String_o *)StringLiteral_25198/*"{0:D0}_{1}"*/, v27, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v29 = &StringLiteral_9637/*"NoblePhantasm_"*/;
    v30 = v28;
    if ( !isNp )
      v29 = &StringLiteral_12818/*"Servants_"*/;
    v31 = (System_String_o *)*v29;
    v32 = System_Int32__ToString((int32_t)&v38, 0LL);
    v34 = System_String__Concat_62401220(v31, v32, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v33);
    return SoundManager__checkServantVoice(v34, v30, 0, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantAssetLoadManager__checkLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B15446 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2);
    byte_4B15446 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return ServantAssetLoadManager__checkLoadlocal((ServantAssetLoadManager_o *)Instance, v4);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantAssetLoadManager_o *v3; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v3 = this;
  if ( (byte_4B15447 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_string__get_Count__,
                                          method,
                                          v2);
    byte_4B15447 = 1;
  }
  loadlist = v3->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v3->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_1BCAA3C(this, method);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v3->fields.soundCount > 0;
}


void __fastcall ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
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
  Il2CppObject *MasterData_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  PartyOrganizationUtility_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  Il2CppObject *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B15430 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15430 = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = (struct ServantMaster_o *)MasterData_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.svtmaster,
      (int64_t)MasterData_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v19 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = (struct ServantLimitMaster_o *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtlimitmaster, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (PartyOrganizationUtility_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (PartyOrganizationUtility_c *)v28;
  sub_1BCA784(p_svtlimitaddmaster, (int64_t)v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B15444 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2);
    byte_4B15444 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ServantAssetLoadManager__clearServantlistlocal((ServantAssetLoadManager_o *)Instance, v4);
}


void __fastcall ServantAssetLoadManager__clearServantlistlocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantAssetLoadManager_o *v3; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_string__o *downloadlist; // x8
  int32_t v8; // w2
  int v9; // w9
  struct System_Collections_Generic_List_string__o *loadedList; // x8
  int32_t v11; // w2
  int v12; // w9

  v3 = this;
  if ( (byte_4B15445 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, method, v2);
    byte_4B15445 = 1;
  }
  loadlist = v3->fields.loadlist;
  if ( !loadlist )
    goto LABEL_13;
  size = loadlist->fields._size;
  v6 = loadlist->fields._version + 1;
  loadlist->fields._size = 0;
  loadlist->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)loadlist->fields._items, 0, size, 0LL);
  downloadlist = v3->fields.downloadlist;
  if ( !downloadlist )
    goto LABEL_13;
  v8 = downloadlist->fields._size;
  v9 = downloadlist->fields._version + 1;
  downloadlist->fields._size = 0;
  downloadlist->fields._version = v9;
  if ( v8 >= 1 )
    System_Array__Clear((System_Array_o *)downloadlist->fields._items, 0, v8, 0LL);
  loadedList = v3->fields.loadedList;
  if ( !loadedList )
LABEL_13:
    sub_1BCAA3C(this, method);
  v11 = loadedList->fields._size;
  v12 = loadedList->fields._version + 1;
  loadedList->fields._size = 0;
  loadedList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)loadedList->fields._items, 0, v11, 0LL);
  v3->fields.soundCount = 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__createShadowEffect(
        ServantAssetLoadManager_o *this,
        int32_t tp,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x19
  System_String_o *v26; // x0
  Il2CppObject *v27; // x20
  Il2CppObject *Item; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v33; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B154A3 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, *(_QWORD *)&tp, *(_QWORD *)&effectId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__, v11, v12);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v19, v20);
    sub_1BCA7E0(&StringLiteral_19097/*"effect/ef_shadow0"*/, v21, v22);
    byte_4B154A3 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&tp);
    EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(effectId, 0LL, 1, 1.0, 0LL);
    if ( EffectObjectSafe )
    {
      v25 = EffectObjectSafe;
      UnityEngine_GameObject__SetActive(EffectObjectSafe, 1, 0LL);
      return v25;
    }
LABEL_22:
    sub_1BCAA3C(EffectObjectSafe, v24);
  }
  v33 = tp + 1;
  v26 = System_Int32__ToString((int32_t)&v33, 0LL);
  EffectObjectSafe = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                                   (System_String_o *)StringLiteral_19097/*"effect/ef_shadow0"*/,
                                                   v26,
                                                   0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_22;
  v27 = (Il2CppObject *)EffectObjectSafe;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this->fields._releaseAssets,
         (Il2CppObject *)EffectObjectSafe,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)this->fields._releaseAssets;
    if ( !EffectObjectSafe )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)EffectObjectSafe,
             v27,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    if ( Item )
    {
      if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
        v30 = Item;
      else
        v30 = 0LL;
    }
    else
    {
      v30 = 0LL;
    }
  }
  else
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_object_(
                                                     (System_String_o *)v27,
                                                     (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( !releaseAssets )
      goto LABEL_22;
    v30 = (Il2CppObject *)EffectObjectSafe;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
      v27,
      (Il2CppObject *)EffectObjectSafe,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       v30,
                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  Il2CppObject *name; // x20

  if ( (byte_4B1544A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v5, v6);
    byte_4B1544A = 1;
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
           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)loadlist,
        name,
        (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_1BCAA3C(loadlist, data);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadlist,
          name,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
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
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4B1545F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&StringLiteral_12811/*"Servants/"*/, v5, v6);
    byte_4B1545F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  BattleChrId = ServantAssetLoadManager__getBattleChrId((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v9);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_12811/*"Servants/"*/, BattleChrId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4B1545E & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&displimitCount, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_12811/*"Servants/"*/, v7, v8);
    byte_4B1545E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v9);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_1BCAA3C(LimitCountByImageLimitCostumeIn, v12);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(
                  (ServantAssetLoadManager_o *)Instance,
                  svtId,
                  LimitCountByImageLimitCostumeIn,
                  v13);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_12811/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_38651152(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15460 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12811/*"Servants/"*/, v4, v5);
    byte_4B15460 = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat((Il2CppObject *)StringLiteral_12811/*"Servants/"*/, v6, 0LL);
}


Il2CppObject *__fastcall ServantAssetLoadManager__getAssetObject_object_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_2FB1530 *method)
{
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, path, file);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path);
  result = (Il2CppObject *)AssetManager__getAssetStorage(path, 0LL);
  if ( result )
    return AssetData__GetObject_object__49237568(
             (AssetData_o *)result,
             file,
             (const MethodInfo_2EF4E40 *)method->rgctx_data->_1_AssetData_GetObject_T_);
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
    sub_1BCAA3C(0LL, v7);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = cameraId;
  if ( (byte_4B154A6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12812/*"Servants/Camera/"*/, method, v2);
    byte_4B154A6 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_12812/*"Servants/Camera/"*/, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15433 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&StringLiteral_12814/*"Servants/Commands/"*/, v4, v5);
    byte_4B15433 = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat((Il2CppObject *)StringLiteral_12814/*"Servants/Commands/"*/, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15432 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&displimitCount, method);
    sub_1BCA7E0(&StringLiteral_12814/*"Servants/Commands/"*/, v4, v5);
    byte_4B15432 = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat((Il2CppObject *)StringLiteral_12814/*"Servants/Commands/"*/, v6, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = enemyNameEffectId;
  if ( (byte_4B154BA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5925/*"Effect/BattleCommon/NameEffect/"*/, method, v2);
    byte_4B154BA = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_5925/*"Effect/BattleCommon/NameEffect/"*/, v3, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15487 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&cutInId, method);
    sub_1BCA7E0(&StringLiteral_5949/*"Effect/CutIn/Skill/{0}"*/, v4, v5);
    byte_4B15487 = 1;
  }
  v8 = cutInId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_5949/*"Effect/CutIn/Skill/{0}"*/, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1543B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&StringLiteral_12817/*"Servants/Status/"*/, v4, v5);
    byte_4B1543B = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat((Il2CppObject *)StringLiteral_12817/*"Servants/Status/"*/, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1543A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&displimitCount, method);
    sub_1BCA7E0(&StringLiteral_12817/*"Servants/Status/"*/, v4, v5);
    byte_4B1543A = 1;
  }
  v8 = svtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat((Il2CppObject *)StringLiteral_12817/*"Servants/Status/"*/, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtmaster; // x0

  if ( (byte_4B15431 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&svtId, method);
    byte_4B15431 = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtmaster;
  if ( !svtmaster )
    sub_1BCAA3C(0LL, v5);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              svtmaster,
                              svtId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1BCAA3C(0LL, v7);
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
    sub_1BCAA3C(0LL, v7);
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
    sub_1BCAA3C(SvtVoiceId, v8);
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
    sub_1BCAA3C(SvtVoiceId, v8);
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

  if ( (byte_4B15475 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&limitCount,
      *(_QWORD *)&weapongroup);
    byte_4B15475 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
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
  __int64 v11; // x2
  System_String_o *BattleChrId; // x0
  System_String_o *v13; // x1

  if ( (byte_4B15476 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&StringLiteral_12811/*"Servants/"*/, v10, v11);
    byte_4B15476 = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v13 = System_String__Concat_62401220((System_String_o *)StringLiteral_12811/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v13,
                                       name,
                                       (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
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

  if ( (byte_4B1548C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&weapongroup);
    byte_4B1548C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  return ServantAssetLoadManager__loadActorMotionlocal(
           (ServantAssetLoadManager_o *)Instance,
           parent,
           v8,
           weapongroup,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  Il2CppObject *AssetObject_object; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x19
  UnityEngine_Transform_o *v22; // x21
  __int64 v23; // x2
  UnityEngine_Transform_o *v24; // x20
  __int64 v25; // x2
  UnityEngine_Transform_o *v26; // x20
  __int64 v27; // x2
  UnityEngine_Transform_o *v28; // x20
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  v30 = weapongroup;
  if ( (byte_4B1548D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, parent, *(_QWORD *)&svtId);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v9, v10);
    sub_1BCA7E0(&StringLiteral_21745/*"motion"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12815/*"Servants/Motion/"*/, v13, v14);
    byte_4B1548D = 1;
  }
  v15 = System_Int32__ToString((int32_t)&v30, 0LL);
  v16 = System_String__Concat_62401220((System_String_o *)StringLiteral_12815/*"Servants/Motion/"*/, v15, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         v16,
                         (System_String_o *)StringLiteral_21745/*"motion"*/,
                         (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_18;
  v21 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_18;
  v22 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v22 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  v24 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C1 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v23);
    byte_4B109C1 = 1;
  }
  if ( !v24 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  v26 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C9 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v25);
    byte_4B109C9 = 1;
  }
  if ( !v26 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(v26, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  v28 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C6 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v27);
    byte_4B109C6 = 1;
  }
  if ( !v28 )
LABEL_18:
    sub_1BCAA3C(transform, v20);
  UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v21;
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

  if ( (byte_4B15471 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount, isForce);
    byte_4B15471 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *ActorFolderName_38651152; // x0

  if ( (byte_4B15472 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_19585/*"fbxevent"*/, v11, v12);
    byte_4B15472 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
  if ( isForce )
    ActorFolderName_38651152 = ServantAssetLoadManager__getActorFolderName_38651152(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_38651152 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  if ( !this )
    sub_1BCAA3C(ActorFolderName_38651152, ActorFolderName_38651152);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_object_(
                                      this,
                                      ActorFolderName_38651152,
                                      (System_String_o *)StringLiteral_19585/*"fbxevent"*/,
                                      (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B15465 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent, *(_QWORD *)&svtId);
    byte_4B15465 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v12);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *ActorFolderName_38651152; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  Il2CppObject *AssetObject_object; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_Transform_o *v33; // x22
  __int64 v34; // x2
  UnityEngine_Transform_o *v35; // x19
  __int64 v36; // x2
  UnityEngine_Transform_o *v37; // x19

  if ( (byte_4B15466 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, assetPath, parent);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v15, v16);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_18145/*"chr"*/, v19, v20);
    byte_4B15466 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, assetPath);
  if ( isForce )
    ActorFolderName_38651152 = ServantAssetLoadManager__getActorFolderName_38651152(
                                 svtId,
                                 (const MethodInfo *)assetPath);
  else
    ActorFolderName_38651152 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  *assetPath = ActorFolderName_38651152;
  sub_1BCA784((PartyOrganizationUtility_o *)assetPath, (int64_t)ActorFolderName_38651152, v22, v23, v24, v25, v26, v27);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         *assetPath,
                         (System_String_o *)StringLiteral_18145/*"chr"*/,
                         (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_21;
  v32 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_21;
  v33 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v33 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v33, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
  v35 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C9 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v31, v34);
    byte_4B109C9 = 1;
  }
  if ( !v35 )
    goto LABEL_21;
  UnityEngine_Transform__set_eulerAngles(v35, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
  v37 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C6 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v31, v36);
    byte_4B109C6 = 1;
  }
  if ( !v37 )
LABEL_21:
    sub_1BCAA3C(transform, v31);
  UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v32;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B15483 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, name, method);
    byte_4B15483 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal((ServantAssetLoadManager_o *)Instance, path, name, v7);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v11; // x1
  Il2CppObject *Object_object__49237568; // x19

  if ( (byte_4B15484 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, path, name);
    sub_1BCA7E0(&AssetManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B15484 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                AssetStorage,
                                name,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  else
    Object_object__49237568 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)Object_object__49237568;
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

  if ( (byte_4B154A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent, method);
    byte_4B154A8 = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *CameraActionPath; // x0
  __int64 v16; // x1
  Il2CppObject *AssetObject_object; // x22
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x22
  __int64 v23; // x2
  UnityEngine_Transform_o *v24; // x19
  __int64 v25; // x2
  UnityEngine_Transform_o *v26; // x19

  if ( (byte_4B154A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&cameraId, parent);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_17888/*"cameraAction"*/, v13, v14);
    byte_4B154A9 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CameraActionPath,
                         (System_String_o *)StringLiteral_17888/*"cameraAction"*/,
                         (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v19 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              AssetObject_object,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v19 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_22;
    v22 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v22 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
    v24 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C9 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v23);
      byte_4B109C9 = 1;
    }
    if ( !v24 )
      goto LABEL_22;
    UnityEngine_Transform__set_eulerAngles(v24, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
    v26 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v25);
      byte_4B109C6 = 1;
    }
    if ( !v26 )
LABEL_22:
      sub_1BCAA3C(transform, v21);
    UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  return v19;
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

  if ( (byte_4B15436 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limit);
    byte_4B15436 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x2
  System_String_o *CommandCardLoadFolderName; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  Il2CppObject *AssetObject_object; // x20
  __int64 v25; // x1
  bool v26; // w8
  UITexture_o *result; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B15437 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, tex, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v10, v11);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_17963/*"card_servant_"*/, v14, v15);
    byte_4B15437 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v16);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v17);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v18, v19);
  v21 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v22 = System_String__Concat_62401220((System_String_o *)StringLiteral_17963/*"card_servant_"*/, v21, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCardLoadFolderName,
                         v22,
                         (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v26 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v26 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v28 )
    {
      if ( !tex )
        sub_1BCAA3C(v28, v29);
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

  if ( (byte_4B154AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, userCommandCodeId, method);
    byte_4B154AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_38670620(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           userCommandCodeId,
           v7);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *CommandCodeFolderName; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *AssetObject_object; // x20
  __int64 v20; // x1
  bool v21; // w8
  UITexture_o *result; // x0
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B154AE & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, tex, *(_QWORD *)&commandCodeId);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_17872/*"c_{0:D7}"*/, v13, v14);
    byte_4B154AE = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, tex);
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v25 = commandCodeId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v17 = System_String__Format((System_String_o *)StringLiteral_17872/*"c_{0:D7}"*/, v16, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCodeFolderName,
                         v17,
                         (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v21 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v23 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v23 )
    {
      if ( !tex )
        sub_1BCAA3C(v23, v24);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_38670620(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B154AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, tex, userCommandCodeId);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B154AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userCommandCodeId,
                               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v21.fields.currentCryptoKey = klass;
  *(_QWORD *)&v21.fields.fakeValue = monitor;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v17, v18);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_38670888(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B154AD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&commandCodeId,
      method);
    byte_4B154AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B15479 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B15479 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return ServantAssetLoadManager__loadCommonEffectlocal((ServantAssetLoadManager_o *)Instance, name, v6);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0
  UnityEngine_Object_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x19
  __int64 v14; // x1

  if ( (byte_4B1547A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, name, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_19064/*"effect/"*/, v8, v9);
    byte_4B1547A = 1;
  }
  v10 = System_String__Concat_62401220((System_String_o *)StringLiteral_19064/*"effect/"*/, name, 0LL);
  v11 = UnityEngine_Resources__Load(v10, 0LL);
  if ( v11 )
  {
    if ( (UnityEngine_GameObject_c *)v11->klass == UnityEngine_GameObject_TypeInfo )
      v13 = v11;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)v13,
                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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

  if ( (byte_4B15477 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&weapongroup,
      *(_QWORD *)&effectFolder);
    byte_4B15477 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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
  __int64 v8; // x1
  UnityEngine_Object_o *Manager__loadCommonEffectlocal; // x22
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x4

  if ( (byte_4B15478 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, *(_QWORD *)&weapongroup);
    byte_4B15478 = 1;
  }
  Manager__loadCommonEffectlocal = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommonEffectlocal(
                                                             this,
                                                             name,
                                                             *(const MethodInfo **)&weapongroup);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v10 = UnityEngine_Object__op_Equality(Manager__loadCommonEffectlocal, 0LL, 0LL);
  if ( v10 )
    return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
             (ServantAssetLoadManager_o *)v10,
             name,
             weapongroup,
             effectFolder,
             v11);
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
  MethodInfo *methoda; // [xsp+8h] [xbp-18h]

  return StandFigureManager__CreateRenderPrefab_38693360(
           parent,
           svtId,
           limitCount,
           2,
           faceType,
           50,
           callbackFunc,
           0,
           -1,
           methoda);
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

  if ( (byte_4B15442 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limit);
    byte_4B15442 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  ServantTreasureDvcEntity_o *EntityFromIDID; // x23
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x25
  ServantLimitAddMaster_o *v41; // x26
  long double v42; // q0
  const MethodInfo *v43; // x2
  System_String_o *v44; // x21
  System_String_o *OverwriteTDFileName; // x0
  Il2CppObject *AssetObject_object; // x20
  int imageIndex; // w22
  __int64 v48; // x0
  System_String_o *v49; // x24
  __int64 v50; // x0
  System_String_o *NpNameFileSuffix; // x22
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x2
  ServantAssetLoadManager_o *v58; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  __int64 v60; // x1
  int v62; // s0
  float v63; // s1
  float v64; // s2
  float v65; // s3
  unsigned int v66; // [xsp+Ch] [xbp-54h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B15443 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, tex, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v23, v24);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_17964/*"card_servant_np"*/, v35, v36);
    byte_4B15443 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v40 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          svtId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  entity = 0LL;
  if ( !v40 )
    goto LABEL_49;
  v41 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)v40, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_16;
  if ( !v41 )
    goto LABEL_49;
  if ( !ServantLimitAddMaster__TryGetEntity(v41, &entity, svtId, limit, 0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_49;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0LL) )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v39);
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v39, v43);
    if ( !entity )
      goto LABEL_49;
    v44 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(entity, 0LL);
    AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                           this,
                           v44,
                           OverwriteTDFileName,
                           (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_16:
    if ( EntityFromIDID )
    {
      v48 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      v49 = (System_String_o *)StringLiteral_17964/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
        v48 = sub_1C1C6BC(v42);
      v50 = *(_QWORD *)(*(_QWORD *)(v48 + 192) + 16LL);
      if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
        v50 = sub_1C1C6BC(v42);
      Instance = **(DataManager_o ***)(v50 + 184);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_49;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v49 = System_String__Concat_62412480(v49, (System_String_o *)StringLiteral_16290/*"_"*/, NpNameFileSuffix, 0LL);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v52);
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v52, v53);
        v58 = this;
        v57 = v49;
      }
      else
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v52);
        v54 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v52, v53);
        v66 = (unsigned int)imageIndex >> 1;
        v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
        v56 = System_String__Format((System_String_o *)StringLiteral_25238/*"{0}"*/, v55, 0LL);
        v57 = System_String__Concat_62401220(v49, v56, 0LL);
        v58 = this;
        CommandCardLoadFolderName = v54;
      }
      AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                             v58,
                             CommandCardLoadFolderName,
                             v57,
                             (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    }
    else
    {
      LOBYTE(imageIndex) = 0;
      AssetObject_object = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( tex )
    {
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
      v62 = 0;
      if ( (imageIndex & 1) != 0 )
        v63 = 0.0;
      else
        v63 = 0.5;
      v64 = 1.0;
      v65 = 0.5;
      UITexture__set_uvRect(tex, *(UnityEngine_Rect_o *)&v62, 0LL);
      return 1;
    }
LABEL_49:
    sub_1BCAA3C(Instance, v39);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(
    (UnityEngine_MonoBehaviour_o *)this,
    Manager__loadNoblePhantasmCoroutine,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x26
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B1549F & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_TypeInfo, parent, *(_QWORD *)&svtId);
    byte_4B1549F = 1;
  }
  v17 = sub_1BCAA2C(
          ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_TypeInfo,
          parent,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount);
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156___ctor(
    (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v17,
    0,
    0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
  *(_QWORD *)(v17 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = parent;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)parent, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v17 + 48) = treasureDvcId;
  *(_DWORD *)(v17 + 52) = limitCount;
  *(_DWORD *)(v17 + 72) = treasureDvcLv;
  *(_DWORD *)(v17 + 56) = npChargeStage;
  *(_DWORD *)(v17 + 60) = svtId;
  *(_QWORD *)(v17 + 80) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 80), (int64_t)callback, v32, v33, v34, v35, v36, v37);
  return (System_Collections_IEnumerator_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B15473 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit, name);
    byte_4B15473 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  return ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           treasureDeviceId,
           limit,
           name,
           seqIdFromMstTDSeqWeight,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  int32_t klass; // w0
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x21
  System_String_o *v27; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  __int64 v30; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B15474 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&treasureDeviceId, *(_QWORD *)&limit);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v17, v18);
    sub_1BCA7E0(&StringLiteral_9633/*"NoblePhantasm/"*/, v19, v20);
    byte_4B15474 = 1;
  }
  v30 = 0LL;
  entity = 0LL;
  if ( seqIdFromMstTDSeqWeight >= 1 )
  {
    HIDWORD(v30) = seqIdFromMstTDSeqWeight;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&treasureDeviceId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          treasureDeviceId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    HIDWORD(v30) = treasureDeviceId;
    goto LABEL_16;
  }
  Master_object = entity;
  if ( !entity
    || (Master_object = (Il2CppObject *)TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)entity, 0LL), !entity) )
  {
LABEL_21:
    sub_1BCAA3C(Master_object, v22);
  }
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    klass = (int32_t)entity[6].klass;
  else
    klass = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, 0LL);
  HIDWORD(v30) = klass;
LABEL_16:
  v24 = System_Int32__ToString((int32_t)&v30 + 4, 0LL);
  v26 = System_String__Concat_62401220((System_String_o *)StringLiteral_9633/*"NoblePhantasm/"*/, v24, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  if ( !AssetManager__isExistAssetStorage(v26, 0LL) )
  {
    LODWORD(v30) = 10 * (SHIDWORD(v30) / 10);
    v27 = System_Int32__ToString((int32_t)&v30, 0LL);
    v26 = System_String__Concat_62401220((System_String_o *)StringLiteral_9633/*"NoblePhantasm/"*/, v27, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v26,
                                       name,
                                       (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void __fastcall ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B15488 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, callback, method);
    byte_4B15488 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  ServantAssetLoadManager__loadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, callback, v7);
}


void __fastcall ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  __int64 v7; // x1
  System_String_o *SkillCutInPath; // x20

  if ( (byte_4B15489 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1BCA7E0(&AssetManager_TypeInfo, skillInfo, callback);
    byte_4B15489 = 1;
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
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
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

  if ( (byte_4B1543E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&svtID,
      *(_QWORD *)&limit);
    byte_4B1543E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x2
  System_String_o *StatusImageFolderName; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  Il2CppObject *AssetObject_object; // x20
  __int64 v24; // x1
  bool v25; // w8
  UITexture_o *result; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1543F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, tex, *(_QWORD *)&svtID);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_23781/*"status_servant_"*/, v13, v14);
    byte_4B1543F = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v15);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v16);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v17, v18);
  v20 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v21 = System_String__Concat_62401220((System_String_o *)StringLiteral_23781/*"status_servant_"*/, v20, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         StatusImageFolderName,
                         v21,
                         (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  v25 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v25 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v27 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v27 )
    {
      if ( !tex )
        sub_1BCAA3C(v27, v28);
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

  if ( (byte_4B1547D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&weapongroup,
      *(_QWORD *)&effectFolder);
    byte_4B1547D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  AssetData_o *AssetStorage; // x0
  __int64 v20; // x1
  Il2CppObject *Object_object__49237568; // x19
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v23 = effectFolder;
  v24 = weapongroup;
  if ( (byte_4B1547E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, name, *(_QWORD *)&weapongroup);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_5978/*"Effect/weapon/"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v13, v14);
    byte_4B1547E = 1;
  }
  v15 = System_Int32__ToString((int32_t)&v24, 0LL);
  v17 = System_String__Concat_62401220((System_String_o *)StringLiteral_5978/*"Effect/weapon/"*/, v15, 0LL);
  if ( effectFolder )
  {
    v18 = System_Int32__ToString((int32_t)&v23, 0LL);
    v17 = System_String__Concat_62412480(v17, (System_String_o *)StringLiteral_1120/*"/"*/, v18, 0LL);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
  AssetStorage = AssetManager__getAssetStorage(v17, 0LL);
  if ( AssetStorage )
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                AssetStorage,
                                name,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  else
    Object_object__49237568 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)Object_object__49237568;
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
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0

  if ( (byte_4B1549C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__,
      *(_QWORD *)&uniqueId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v7, v8);
    byte_4B1549C = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         ActorVoice,
         uniqueId,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             ActorVoice,
                                                                             uniqueId,
                                                                             (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1BCAA3C(ActorVoice, *(_QWORD *)&uniqueId);
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

  if ( (byte_4B15490 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&limit,
      *(_QWORD *)&overwriteSvtVoiceId);
    byte_4B15490 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v18);
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

  if ( (byte_4B15493 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&limit,
      *(_QWORD *)&overwriteSvtVoiceId);
    byte_4B15493 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v12);
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
  __int64 v14; // x2
  SePlayer_o *result; // x0
  const MethodInfo *v16; // x3
  int32_t VoiceId; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B15494 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantAssetLoadManager_playBattleVoiceSelocal__, *(_QWORD *)&svtId, *(_QWORD *)&limit);
    sub_1BCA7E0(&StringLiteral_12811/*"Servants/"*/, v13, v14);
    byte_4B15494 = 1;
  }
  result = (SePlayer_o *)ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  if ( result )
  {
    VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
    v18 = Method_ServantAssetLoadManager_playBattleVoiceSelocal__;
    if ( overwriteSvtVoiceId )
      VoiceId = overwriteSvtVoiceId;
    v22 = VoiceId;
    if ( (*((_BYTE *)Method_ServantAssetLoadManager_playBattleVoiceSelocal__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1BCA7F8(Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
    v20 = System_Int32__ToString((int32_t)&v22, 0LL);
    v21 = System_String__Concat_62401220((System_String_o *)StringLiteral_12811/*"Servants/"*/, v20, 0LL);
    return OverwriteAssetSoundName__PlaySe_39322196(v19, v21, targetFileName, volume, 0LL, 0LL);
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
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x23
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x28
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  const MethodInfo *v58; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x3
  int32_t VoicePrefix; // w0
  System_String_o **v63; // x8
  System_String_o *v64; // x22
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v67; // x22
  System_String_o *v68; // x24
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Action_o *v72; // x25
  __int64 v73; // x1
  Il2CppObject *v75; // x0
  int32_t v76; // [xsp+8h] [xbp-68h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B15491 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limit);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__, v26, v27);
    sub_1BCA7E0(&int_TypeInfo, v28, v29);
    sub_1BCA7E0(&SoundManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_ServantAssetLoadManager___c__DisplayClass138_0__playBattleVoicelocal_b__0__, v32, v33);
    sub_1BCA7E0(&ServantAssetLoadManager___c__DisplayClass138_0_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_25198/*"{0:D0}_{1}"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_12811/*"Servants/"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_9633/*"NoblePhantasm/"*/, v40, v41);
    byte_4B15491 = 1;
  }
  v42 = sub_1BCAA2C(
          ServantAssetLoadManager___c__DisplayClass138_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limit,
          *(_QWORD *)&overwriteSvtVoiceId);
  ServantAssetLoadManager___c__DisplayClass138_0___ctor((ServantAssetLoadManager___c__DisplayClass138_0_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_29;
  *(_QWORD *)(v42 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)this, v45, v46, v47, v48, v49, v50);
  *(_QWORD *)(v42 + 24) = callback;
  v51 = v42 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 24), (int64_t)callback, v52, v53, v54, v55, v56, v57);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v58);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v60);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v61);
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
               (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__object___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   ActorVoice,
                                                                                   uniqueId,
                                                                                   (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
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
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v63 = (System_String_o **)(isNp ? &StringLiteral_9633/*"NoblePhantasm/"*/ : &StringLiteral_12811/*"Servants/"*/);
        v64 = *v63;
        v65 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v66 = System_String__Concat_62401220(v64, v65, 0LL);
        v67 = this->fields.ActorVoice;
        v68 = v66;
        v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v69, v70, v71);
        System_Action___ctor(
          v72,
          (Il2CppObject *)v42,
          Method_ServantAssetLoadManager___c__DisplayClass138_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v73);
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)SoundManager__playVoice_39419392(
                                                                               v68,
                                                                               targetFileName,
                                                                               volume,
                                                                               v72,
                                                                               0LL);
        if ( v67 )
        {
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)v67,
            uniqueId,
            (Il2CppObject *)ActorVoice,
            (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_1BCAA3C(ActorVoice, v44);
    }
  }
  else
  {
    v76 = VoicePrefix;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
    targetFileName = System_String__Format_62415592(
                       (System_String_o *)StringLiteral_25198/*"{0:D0}_{1}"*/,
                       v75,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  if ( *(_QWORD *)v51 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v51 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v51 + 64LL),
      *(_QWORD *)(*(_QWORD *)v51 + 40LL));
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = weapongroup;
  if ( (byte_4B1548B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly, method);
    sub_1BCA7E0(&StringLiteral_12815/*"Servants/Motion/"*/, v4, v5);
    byte_4B1548B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v7 = System_Int32__ToString((int32_t)&v11, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_12815/*"Servants/Motion/"*/, v7, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v8, dlOnly, v10);
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

  if ( (byte_4B15461 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, isForce, method);
    byte_4B15461 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1BCAA3C(Instance, v6);
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
  System_String_o *ActorFolderName_38651152; // x0
  const MethodInfo *v15; // x3

  if ( (byte_4B15462 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    byte_4B15462 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
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
      ActorFolderName_38651152 = ServantAssetLoadManager__getActorFolderName_38651152(v13, *(const MethodInfo **)&svtId);
      goto LABEL_10;
    }
  }
  ActorFolderName_38651152 = ServantAssetLoadManager__getActorFolderName(
                               v13,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_10:
  if ( !this )
    sub_1BCAA3C(ActorFolderName_38651152, ActorFolderName_38651152);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_38651152, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B15481 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B15481 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           effectIdList,
           v6);
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

  if ( (byte_4B15482 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, effectIdList, method);
    byte_4B15482 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, effectIdList);
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_1BCAA3C(0LL, v6);
  v8 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v9 = BattleCommonEffectPathList;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1BCAA44(BattleCommonEffectPathList, v6);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x21
  System_String_o *CameraActionPath; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B154A7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, dlOnly, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5, v6);
    byte_4B154A7 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7);
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v7);
    if ( !Instance )
      sub_1BCAA3C(CameraActionPath, v10);
    ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, CameraActionPath, dlOnly, v11);
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

  if ( (byte_4B15434 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount, method);
    byte_4B15434 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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

  if ( (byte_4B15435 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    byte_4B15435 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(
                                svtId,
                                svtId,
                                *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, CommandCardLoadFolderName, dlOnly, v9);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B154B0 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, commandCodeIds, dlOnly);
    byte_4B154B0 = 1;
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
          sub_1BCAA44(this, commandCodeIds);
        v10 = commandCodeIds->m_Items[v8 + 1];
        if ( v10 >= 1 )
        {
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, commandCodeIds);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B1545A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2);
    byte_4B1545A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v4);
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v17; // x20
  unsigned __int64 v18; // x24
  bool *p_DispLog; // x28
  SoundManager_o *v20; // x21
  System_String_o *VoiceAssetName; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x23

  if ( (byte_4B1545B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v6, v7);
    sub_1BCA7E0(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v12, v13);
    byte_4B1545B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase__getEntitys_object_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_1BCAA3C(Instance, v15);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v17 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v18 = 0LL;
    p_DispLog = &Instance->fields._DispLog;
    do
    {
      if ( v18 >= (unsigned int)m_CancellationTokenSource )
LABEL_20:
        sub_1BCAA44(Instance, v15);
      Instance = *(DataManager_o **)&p_DispLog[8 * v18];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v18 >= LODWORD(v17->fields.m_CancellationTokenSource) )
            goto LABEL_20;
          Instance = *(DataManager_o **)&p_DispLog[8 * v18];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v18 >= LODWORD(v17->fields.m_CancellationTokenSource) )
              goto LABEL_20;
            v20 = (SoundManager_o *)Instance;
            Instance = *(DataManager_o **)&p_DispLog[8 * v18];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
            v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
            System_Action___ctor(
              v25,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v20 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v20, VoiceAssetName, v25, 1, 0LL);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v17->fields.m_CancellationTokenSource;
      ++v18;
    }
    while ( (__int64)v18 < (int)m_CancellationTokenSource );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  System_String_o *NameEffectPath; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4B154B7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, dlOnly, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5, v6);
    byte_4B154B7 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v9 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v9, v8);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v12);
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, NameEffectPath, dlOnly, v13);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  EffectMovieMaster_c *v19; // x0
  int32_t *v20; // x1
  System_String_o *NOBLE_PATH; // x22
  System_Int32_c *v22; // x0
  EffectMovieMaster_c *v23; // x0
  Il2CppObject *v24; // x0
  System_String_o *BATTLECOMMON_PATH; // x0
  System_String_o *name; // x1
  System_String_o *v27; // x2
  EffectMovieMaster_c *v28; // x0
  System_String_o *v29; // x20
  const MethodInfo *v30; // x3
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  v8 = ent;
  if ( (byte_4B1547C & 1) == 0 )
  {
    sub_1BCA7E0(&EffectMovieMaster_TypeInfo, *(_QWORD *)&loadFolderType, *(_QWORD *)&optionNo);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_1118/*".usm"*/, v15, v16);
    ent = (EffectMovieEntity_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B1547C = 1;
  }
  if ( !v8 )
    goto LABEL_27;
  if ( v8->fields.folderType != loadFolderType )
    return;
  switch ( loadFolderType )
  {
    case 2:
      v23 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&loadFolderType);
        v23 = EffectMovieMaster_TypeInfo;
      }
      v20 = &v31;
      NOBLE_PATH = v23->static_fields->NOBLE_PATH;
      v22 = int_TypeInfo;
      v31 = optionNo;
      goto LABEL_14;
    case 5:
      v28 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&loadFolderType);
        v28 = EffectMovieMaster_TypeInfo;
      }
      name = v8->fields.name;
      BATTLECOMMON_PATH = v28->static_fields->BATTLECOMMON_PATH;
      v27 = (System_String_o *)StringLiteral_1118/*".usm"*/;
      goto LABEL_18;
    case 3:
      v19 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&loadFolderType);
        v19 = EffectMovieMaster_TypeInfo;
      }
      v20 = &v32;
      NOBLE_PATH = v19->static_fields->WEAPON_PATH;
      v22 = int_TypeInfo;
      v32 = optionNo;
LABEL_14:
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(v22, v20);
      BATTLECOMMON_PATH = System_String__Format(NOBLE_PATH, v24, 0LL);
      name = v8->fields.name;
      v27 = (System_String_o *)StringLiteral_1118/*".usm"*/;
LABEL_18:
      v29 = System_String__Concat_62412480(BATTLECOMMON_PATH, name, v27, 0LL);
      goto LABEL_20;
  }
  v29 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !ent )
    goto LABEL_27;
  if ( !AssetManager__IsExistAssetStorage((AssetManager_o *)ent, v29, 0LL) )
    return;
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !ent )
    goto LABEL_27;
  if ( !AssetManager__IsNeedDownload((AssetManager_o *)ent, v29, 0LL) )
    return;
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ent )
LABEL_27:
    sub_1BCAA3C(ent, *(_QWORD *)&loadFolderType);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)ent, v29, dlOnly, v30);
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

  if ( (byte_4B1544F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly, method);
    byte_4B1544F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B15452 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&limitCount,
      *(_QWORD *)&overwriteSvtVoiceId);
    byte_4B15452 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t VoiceId; // w0
  int32_t v20; // w8
  Il2CppObject *Instance; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x0
  System_Action_o *v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B15453 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__, v11, v12);
    sub_1BCA7E0(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_12818/*"Servants_"*/, v17, v18);
    byte_4B15453 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v20 = overwriteSvtVoiceId;
  else
    v20 = VoiceId;
  v31 = v20;
  if ( v20 )
  {
    ++this->fields.soundCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v22 = System_Int32__ToString((int32_t)&v31, 0LL);
    v23 = System_String__Concat_62401220((System_String_o *)StringLiteral_12818/*"Servants_"*/, v22, 0LL);
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
    v28 = v27;
    if ( dlOnly )
    {
      System_Action___ctor(
        v27,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, v23, v28, 1, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(v29, v30);
    }
    System_Action___ctor(
      v27,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v23, v28, 1, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B15456 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly, method);
    byte_4B15456 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  long double v20; // q0
  __int64 v21; // x0
  __int64 v22; // x0
  DataManager_o *v23; // x0
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v26; // x21
  System_String_o *VoiceAssetName; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x21
  __int64 v32; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x22

  if ( (byte_4B15457 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, skillInfo, dlOnly);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v7, v8);
    sub_1BCA7E0(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__, v9, v10);
    sub_1BCA7E0(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&SoundManager_TypeInfo, v17, v18);
    byte_4B15457 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C1C6BC(v20);
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C1C6BC(v20);
    v23 = **(DataManager_o ***)(v22 + 184);
    if ( v23 )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            v23,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v23 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   (int32_t)v23,
                   skillInfo->fields.skilllv,
                   0LL);
        if ( !Entity )
          return;
        v26 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v26, 0LL);
          v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
          System_Action___ctor(
            v31,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v32);
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v31, 1, 0LL);
          return;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v34 = SkillLvEntity__getVoiceAssetName(v26, 0LL);
        v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
        System_Action___ctor(
          v38,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v34, v38, 1, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(v23, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4B1543C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount, method);
    byte_4B1543C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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

  if ( (byte_4B1543D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    byte_4B1543D = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  int i; // w8
  Il2CppObject *v25; // x20
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x20
  const MethodInfo *v29; // x3
  int32_t v30; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v31; // [xsp+8h] [xbp-58h] BYREF
  int v32; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v33; // [xsp+18h] [xbp-48h] BYREF
  int32_t v34; // [xsp+1Ch] [xbp-44h] BYREF

  v33 = effectFolder;
  v34 = weapongroup;
  if ( (byte_4B1547B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&effectFolder, dlOnly);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_5978/*"Effect/weapon/"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_5981/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5061/*"D3"*/, v16, v17);
    byte_4B1547B = 1;
  }
  v32 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v19 = System_Int32__ToString((int32_t)&v34, 0LL);
  if ( effectFolder )
  {
    v20 = System_Int32__ToString((int32_t)&v33, 0LL);
    v21 = System_String__Concat_62414484(
            (System_String_o *)StringLiteral_5978/*"Effect/weapon/"*/,
            v19,
            (System_String_o *)StringLiteral_1120/*"/"*/,
            v20,
            0LL);
    if ( !Instance )
LABEL_16:
      sub_1BCAA3C(v21, v22);
  }
  else
  {
    v21 = System_String__Concat_62401220((System_String_o *)StringLiteral_5978/*"Effect/weapon/"*/, v19, 0LL);
    if ( !Instance )
      goto LABEL_16;
  }
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v21, dlOnly, v23);
  for ( i = 1; ; i = v32 + 1 )
  {
    v31 = v34;
    v32 = i;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v30 = v34;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v27 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v32, (System_String_o *)StringLiteral_5061/*"D3"*/, 0LL);
    v28 = System_String__Format_62415660((System_String_o *)StringLiteral_5981/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v25, v26, v27, 0LL);
    v21 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !v21 )
      goto LABEL_16;
    if ( !AssetManager__IsExistAssetStorage((AssetManager_o *)v21, v28, 0LL) )
      break;
    v21 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !v21 )
      goto LABEL_16;
    if ( AssetManager__IsNeedDownload((AssetManager_o *)v21, v28, 0LL) )
    {
      v21 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !v21 )
        goto LABEL_16;
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)v21, v28, dlOnly, v29);
    }
  }
}


void __fastcall ServantAssetLoadManager__releaseNoblePhantasm(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  AssetData_o *nobleAssetData; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  AssetData_o *nobleSequenceData; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_List_object__o *nobleEffectList; // x0
  System_String_array *v47; // x0
  const MethodInfo *v48; // x2
  struct System_Collections_Generic_List_string__o *v49; // x8
  int32_t size; // w2
  int v51; // w9
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B154A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_AssetData__TypeInfo, v18, v19);
    byte_4B154A1 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nobleAssetData, 0LL, v21, v22, v23, v24, v25, v26);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nobleSequenceData, 0LL, v28, v29, v30, v31, v32, v33);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      (System_Collections_Generic_List_object__o *)bgAssetDataList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v52.fields._current )
        sub_1BCAA3C(0LL, v35);
      AssetData__RemoveEntry((AssetData_o *)v52.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_AssetData__TypeInfo,
                                                         v36,
                                                         v37,
                                                         v38);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v39;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgAssetDataList, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  }
  nobleEffectList = (System_Collections_Generic_List_object__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_20;
  if ( nobleEffectList->fields._size <= 0 )
    return;
  v47 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v47, v48);
  v49 = this->fields.nobleEffectList;
  if ( !v49 )
LABEL_20:
    sub_1BCAA3C(nobleEffectList, method);
  size = v49->fields._size;
  v51 = v49->fields._version + 1;
  v49->fields._size = 0;
  v49->fields._version = v51;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v49->fields._items, 0, size, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *downloadlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  AssetLoader_LoadEndDataHandler_o *v37; // x21
  __int64 v38; // x1
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  AssetLoader_LoadEndDataHandler_o *v46; // x21
  __int64 v47; // x1

  if ( (byte_4B15448 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, path, dlOnly);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v13, v14);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_endloadList__, v17, v18);
    byte_4B15448 = 1;
  }
  if ( dlOnly )
  {
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
    if ( downloadlist )
    {
      items = downloadlist->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++downloadlist->fields._version;
      if ( items )
      {
        size = downloadlist->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            downloadlist,
            (Il2CppObject *)path,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          downloadlist->fields._size = size + 1;
          v23[4] = (Il2CppClass *)path;
          sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)path, dlOnly, (int32_t)method, v4, v5, v6, v7);
        }
        v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26);
        AssetLoader_LoadEndDataHandler___ctor(
          v37,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager_endloadList__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v38);
        if ( AssetManager__downloadAssetStorage(path, v37, 20, 0LL) )
          return;
        downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
        if ( downloadlist )
        {
          System_Collections_Generic_List_object___Remove(
            downloadlist,
            (Il2CppObject *)path,
            (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
          return;
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(downloadlist, path);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadedList;
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
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v27->obj.klass + v29;
    downloadlist->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)path;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)path, dlOnly, (int32_t)method, v4, v5, v6, v7);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_28;
  v39 = downloadlist->fields._items;
  v40 = Method_System_Collections_Generic_List_string__Add__;
  ++downloadlist->fields._version;
  if ( !v39 )
    goto LABEL_28;
  v41 = downloadlist->fields._size;
  if ( (unsigned int)v41 >= v39->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      downloadlist,
      (Il2CppObject *)path,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &v39->obj.klass + v41;
    downloadlist->fields._size = v41 + 1;
    v42[4] = (Il2CppClass *)path;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)path, v31, v32, v33, v34, v35, v36);
  }
  v46 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v43, v44, v45);
  AssetLoader_LoadEndDataHandler___ctor(v46, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v47);
  AssetManager__loadAssetStorage_38512128(path, 20, v46, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__tryLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  if ( (byte_4B15449 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, path, dlOnly);
    byte_4B15449 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path);
  if ( AssetManager__isExistAssetStorage(path, 0LL) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, v7);
}


void __fastcall ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B1548E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B1548E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  ServantAssetLoadManager__unloadActorMotionlocal((ServantAssetLoadManager_o *)Instance, weapongroup, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0
  Il2CppObject *loadedList; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = weapongroup;
  if ( (byte_4B1548F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v6, v7);
    sub_1BCA7E0(&StringLiteral_12815/*"Servants/Motion/"*/, v8, v9);
    byte_4B1548F = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v15, 0LL);
  loadedList = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_12815/*"Servants/Motion/"*/, v10, 0LL);
  if ( !this->fields.loadedList )
    goto LABEL_10;
  v13 = loadedList;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          loadedList,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = (Il2CppObject *)this->fields.loadedList;
  if ( !loadedList )
LABEL_10:
    sub_1BCAA3C(loadedList, v12);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    v13,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v13, 0LL);
  AssetManager__releaseAsset_38505704(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B154A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2);
    byte_4B154A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ServantAssetLoadManager__unloadAssetsLocal((ServantAssetLoadManager_o *)Instance, v4);
}


void __fastcall ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  __int64 v17; // x1
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B154A5 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12, v13);
    byte_4B154A5 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)loadedList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
      AssetManager__releaseAsset_38505704(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v19 = this->fields.loadedList;
  if ( !v19 )
LABEL_16:
    sub_1BCAA3C(loadedList, method);
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4

  if ( (byte_4B15467 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B15467 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1BCAA3C(Instance, v5);
  ServantAssetLoadManager__unloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v6);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *ActorFolderName; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4B15468 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v11, v12);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v13, v14);
    byte_4B15468 = 1;
  }
  if ( appearanceId < 1 )
    appearanceId = svtId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
  ActorFolderName = (Il2CppObject *)ServantAssetLoadManager__getActorFolderName(
                                      appearanceId,
                                      limitCount,
                                      *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v17 = ActorFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          ActorFolderName,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_11;
  ActorFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !ActorFolderName )
LABEL_14:
    sub_1BCAA3C(ActorFolderName, v16);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)ActorFolderName,
    v17,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_11:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v17, 0LL);
  AssetManager__releaseAsset_38505704(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B154AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B154AA = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v5);
    ServantAssetLoadManager__unloadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, v6);
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

  if ( (byte_4B154AB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId, method);
    byte_4B154AB = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId);
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

  if ( (byte_4B15438 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount, method);
    byte_4B15438 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *CommandCardLoadFolderName; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4B15439 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v8, v9);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v10, v11);
    byte_4B15439 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
  CommandCardLoadFolderName = (Il2CppObject *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                svtId,
                                                svtId,
                                                *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v14 = CommandCardLoadFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          CommandCardLoadFolderName,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  CommandCardLoadFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !CommandCardLoadFolderName )
LABEL_12:
    sub_1BCAA3C(CommandCardLoadFolderName, v13);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)CommandCardLoadFolderName,
    v14,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v14, 0LL);
  AssetManager__releaseAsset_38505704(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B1545C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2);
    byte_4B1545C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v4);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *Instance; // x0
  __int64 v10; // x1
  int v11; // w8
  _DWORD *v12; // x19
  unsigned int i; // w21
  char *v14; // x23
  CommandSpellEntity_o *v15; // x0
  void **v16; // x23
  CommandSpellEntity_o *v17; // t1
  SoundManager_o *v18; // x20

  if ( (byte_4B1545D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7, v8);
    byte_4B1545D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_1BCAA3C(Instance, v10);
  }
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 >= 1 )
  {
    for ( i = 0; (int)i < v11; ++i )
    {
      if ( i >= v11 )
LABEL_20:
        sub_1BCAA44(Instance, v10);
      v14 = (char *)&v12[2 * i];
      v17 = (CommandSpellEntity_o *)*((_QWORD *)v14 + 4);
      v16 = (void **)(v14 + 32);
      v15 = v17;
      if ( !v17 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v15, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v12[6] )
          goto LABEL_20;
        Instance = *v16;
        if ( !*v16 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v12[6] )
            goto LABEL_20;
          v18 = (SoundManager_o *)Instance;
          Instance = *v16;
          if ( !*v16 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( !v18 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v18, (System_String_o *)Instance, 0LL);
        }
      }
      v11 = v12[6];
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B154B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B154B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  ServantAssetLoadManager__unloadFromDeckServantlocal((ServantAssetLoadManager_o *)Instance, deckSvt, v6);
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServantlocal(
        ServantAssetLoadManager_o *this,
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v12; // x1
  int32_t v13; // w20
  Il2CppObject *NameEffectPath; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4B154B9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, deckSvt, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v7, v8);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v9, v10);
    byte_4B154B9 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v13 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v12);
      NameEffectPath = (Il2CppObject *)ServantAssetLoadManager__getNameEffectPath(v13, v12);
      if ( this->fields.loadedList )
      {
        v16 = (System_String_o *)NameEffectPath;
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)this->fields.loadedList,
                NameEffectPath,
                (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_11:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
          AssetStorage = AssetManager__getAssetStorage(v16, 0LL);
          AssetManager__releaseAsset_38505704(AssetStorage, 0LL);
          return;
        }
        NameEffectPath = (Il2CppObject *)this->fields.loadedList;
        if ( NameEffectPath )
        {
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)NameEffectPath,
            (Il2CppObject *)v16,
            (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_11;
        }
      }
      sub_1BCAA3C(NameEffectPath, v15);
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B15450 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B15450 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  ServantAssetLoadManager__unloadServantlocal((ServantAssetLoadManager_o *)Instance, args, v6);
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

  if ( (byte_4B15454 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&limitCount,
      *(_QWORD *)&overwriteSvtVoiceId);
    byte_4B15454 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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
  __int64 v10; // x2
  int32_t VoiceId; // w0
  int32_t v12; // w8
  Il2CppObject *Instance; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B15455 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&StringLiteral_12818/*"Servants_"*/, v9, v10);
    byte_4B15455 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v12 = overwriteSvtVoiceId;
  else
    v12 = VoiceId;
  v17 = v12;
  if ( v12 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v14 = System_Int32__ToString((int32_t)&v17, 0LL);
    v15 = System_String__Concat_62401220((System_String_o *)StringLiteral_12818/*"Servants_"*/, v14, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v15, v16);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, v15, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B15458 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B15458 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v6);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  long double v9; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  DataManager_o *VoiceAssetName; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v15; // x19
  Il2CppObject *Instance; // x20

  if ( (byte_4B15459 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6, v7);
    byte_4B15459 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         method)
    && skillInfo->fields.skilllv )
  {
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C1C6BC(v9);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C1C6BC(v9);
    VoiceAssetName = **(DataManager_o ***)(v11 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          VoiceAssetName,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
      v15 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = (DataManager_o *)SkillLvEntity__getVoiceAssetName(v15, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_1BCAA3C(VoiceAssetName, v8);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B1548A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B1548A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  ServantAssetLoadManager__unloadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v6);
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

  if ( (byte_4B15440 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount, method);
    byte_4B15440 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *StatusImageFolderName; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4B15441 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    byte_4B15441 = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v13);
  StatusImageFolderName = (Il2CppObject *)ServantAssetLoadManager__getStatusImageFolderName(svtId, v13, v14);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v17 = StatusImageFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          StatusImageFolderName,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  StatusImageFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !StatusImageFolderName )
LABEL_12:
    sub_1BCAA3C(StatusImageFolderName, v16);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)StatusImageFolderName,
    v17,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v17, 0LL);
  AssetManager__releaseAsset_38505704(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  __int64 v11; // x1
  AssetData_o *v12; // x19

  if ( (byte_4B15486 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, path, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v7, v8);
    byte_4B15486 = 1;
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_14;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)path,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_14:
    sub_1BCAA3C(loadedList, path);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)path,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
  {
    v12 = AssetStorage;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v11);
    AssetManager__releaseAsset_38505704(v12, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B15485 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method, v2);
    byte_4B15485 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal((ServantAssetLoadManager_o *)Instance, pathList, v6);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetsLocal(
        ServantAssetLoadManager_o *this,
        System_String_array *pathList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !pathList )
    sub_1BCAA3C(this, 0LL);
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BCAA44(this, pathList);
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

  if ( (byte_4B1547F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      *(_QWORD *)&effectFolder,
      method);
    byte_4B1547F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v20 = effectFolder;
  v21 = weapongroup;
  if ( (byte_4B15480 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup, *(_QWORD *)&effectFolder);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v8, v9);
    sub_1BCA7E0(&StringLiteral_5978/*"Effect/weapon/"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v12, v13);
    byte_4B15480 = 1;
  }
  v14 = System_Int32__ToString((int32_t)&v21, 0LL);
  v16 = System_String__Concat_62401220((System_String_o *)StringLiteral_5978/*"Effect/weapon/"*/, v14, 0LL);
  if ( effectFolder )
  {
    v17 = System_Int32__ToString((int32_t)&v20, 0LL);
    v16 = System_String__Concat_62412480(v16, (System_String_o *)StringLiteral_1120/*"/"*/, v17, 0LL);
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_12;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)v16,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_12:
    sub_1BCAA3C(loadedList, v15);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)v16,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
  AssetStorage = AssetManager__getAssetStorage(v16, 0LL);
  AssetManager__releaseAsset_38505704(AssetStorage, 0LL);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantAssetLoadManager__GetAheadBg_d__158_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_object__o *v36; // x22
  ServantAssetLoadManager__GetAheadBg_d__158_o **p_bgAheadList_5__2; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct WellFired_USFGOChangeBgEvent_array *v50; // x22
  int max_length; // w8
  unsigned int v52; // w23
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 _2__current_low; // x10
  __int64 v56; // x8
  __int64 v57; // x1
  System_String_o *BgAssetPath; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  AssetLoader_LoadEndDataHandler_o *v62; // x22
  __int64 v63; // x1
  struct System_Collections_Generic_List_USFGOChangeBgEvent__o *bgAheadList_5__2; // x8
  _DWORD *monitor; // x9
  struct System_Action_o *callback; // x8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v68; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4B154C0 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__get_Count__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo, v25, v26);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_ServantAssetLoadManager__GetAheadBg_b__158_0__, v29, v30);
    this = (ServantAssetLoadManager__GetAheadBg_d__158_o *)sub_1BCA7E0(
                                                             &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                             v31,
                                                             v32);
    byte_4B154C0 = 1;
  }
  memset(&v77, 0, sizeof(v77));
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
    v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v36,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v8->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v36;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__158_o **)&v8->fields._bgAheadList_5__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._bgAheadList_5__2, (int64_t)v36, v38, v39, v40, v41, v42, v43);
    v50 = v8->fields.bgList;
    if ( !v50 )
      goto LABEL_35;
    max_length = v50->max_length;
    if ( max_length >= 1 )
    {
      v52 = 0;
      while ( 1 )
      {
        if ( v52 >= max_length )
          sub_1BCAA44(this, method);
        method = (const MethodInfo *)v50->m_Items[v52];
        if ( !method )
          break;
        if ( BYTE1(method->rgctx_data) )
        {
          this = *p_bgAheadList_5__2;
          if ( !*p_bgAheadList_5__2 )
            break;
          v53 = *(_QWORD *)&this->fields.__1__state;
          v54 = Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__;
          ++HIDWORD(this->fields.__2__current);
          if ( !v53 )
            break;
          _2__current_low = SLODWORD(this->fields.__2__current);
          if ( (unsigned int)_2__current_low >= *(_DWORD *)(v53 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)method,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = v53 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v56 + 32) = method;
            sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)method, v44, v45, v46, v47, v48, v49);
          }
        }
        max_length = v50->max_length;
        if ( (int)++v52 >= max_length )
          goto LABEL_18;
      }
LABEL_35:
      sub_1BCAA3C(this, method);
    }
LABEL_18:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_35;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v76,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v77 = v76;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v77,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v77.fields._current )
        sub_1BCAA3C(0LL, v57);
      BgAssetPath = WellFired_USFGOChangeBgEvent__GetBgAssetPath(
                      (WellFired_USFGOChangeBgEvent_o *)v77.fields._current,
                      0LL);
      v62 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v59, v60, v61);
      AssetLoader_LoadEndDataHandler___ctor(v62, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__158_0__, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v63);
      AssetManager__loadAssetStorage(BgAssetPath, v62, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
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
    sub_1BCA784((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_32;
  }
  v68 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
  UnityEngine_WaitForEndOfFrame___ctor(v68, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v68;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v68, v70, v71, v72, v73, v74, v75);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ServantAssetLoadManager__GetAheadBg_d__158_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B154BE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager___c_TypeInfo, v1, v2);
    byte_4B154BE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantAssetLoadManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantAssetLoadManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, data);
  _4__this->fields.nobleSequenceData = data;
  sub_1BCA784(
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 _4__this; // x0
  __int64 v23; // x1
  Il2CppObject *AssetObject_object; // x20
  Il2CppObject *v25; // x0
  struct UnityEngine_GameObject_o **p_sequence; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Transform_o *v33; // x21
  __int64 v34; // x2
  UnityEngine_Transform_o *v35; // x21
  __int64 v36; // x2
  UnityEngine_Transform_o *v37; // x21
  __int64 v38; // x2
  UnityEngine_Transform_o *v39; // x21
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v43; // x20
  ServantAssetLoadManager_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4B154BF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v16, v17);
    sub_1BCA7E0(&Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__2__, v18, v19);
    sub_1BCA7E0(&StringLiteral_4530/*"ChrSequence1"*/, v20, v21);
    byte_4B154BF = 1;
  }
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  *(_QWORD *)(_4__this + 112) = assetData;
  sub_1BCA784((PartyOrganizationUtility_o *)(_4__this + 112), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         (ServantAssetLoadManager_o *)_4__this,
                         this->fields.sequencePath,
                         (System_String_o *)StringLiteral_4530/*"ChrSequence1"*/,
                         (const MethodInfo_2FB1530 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v25 = UnityEngine_Object__Instantiate_object_(
          AssetObject_object,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = (struct UnityEngine_GameObject_o *)v25;
  p_sequence = &this->fields.sequence;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sequence, (int64_t)v25, v27, v28, v29, v30, v31, v32);
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
  v33 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (__int64)UnityEngine_GameObject__get_transform(this->fields.parent, 0LL);
  if ( !v33 )
    goto LABEL_28;
  UnityEngine_Transform__set_parent(v33, (UnityEngine_Transform_o *)_4__this, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v35 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4B109C1 )
  {
    _4__this = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, assetData, v34);
    byte_4B109C1 = 1;
  }
  if ( !v35 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v37 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4B109C9 )
  {
    _4__this = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, assetData, v36);
    byte_4B109C9 = 1;
  }
  if ( !v37 )
    goto LABEL_28;
  UnityEngine_Transform__set_eulerAngles(v37, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v39 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4B109C6 )
  {
    _4__this = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, assetData, v38);
    byte_4B109C6 = 1;
  }
  if ( !v39 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                        (UnityEngine_GameObject_o *)_4__this,
                        (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v43 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v44 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, assetData, v40, v41);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v45, v46, v47, v48, v49, v50);
  }
  if ( !v44 )
LABEL_28:
    sub_1BCAA3C(_4__this, assetData);
  ServantAssetLoadManager__LoadBg(v44, v43, _9__2, 0LL);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  struct ServantAssetLoadManager_o *_4__this; // x20
  Il2CppObject *v60; // x22
  struct ServantAssetLoadManager___c__DisplayClass156_0_o **p__8__1; // x21
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t parent; // x1
  __int64 v82; // x1
  TreasureDeviceSequenceWeightEntity_o *EntityWithCommonPattern; // x0
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *v84; // x8
  int32_t _1__state; // w0
  int v86; // w8
  struct ServantAssetLoadManager_o **p__4__this; // x0
  System_String_o *v88; // x21
  Il2CppObject *v89; // x23
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  AssetLoader_LoadEndDataHandler_o *v93; // x22
  __int64 v94; // x1
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v95; // x8
  UnityEngine_Object_o *sequence; // x21
  __int64 v97; // x1
  int64_t v98; // x2
  __int64 v99; // x3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Generic_List_int__o *v104; // x21
  System_Int32_array *funcId; // x21
  int v106; // w21
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v107; // x8
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *v109; // x21
  __int64 v110; // x22
  PartyOrganizationUtility_o *p__2__current; // x19
  int v112; // w8
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v113; // x8
  struct UnityEngine_GameObject_o *v114; // x20
  struct ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x24
  int32_t seqIdFromMstTDSeqWeight_5__2; // w21
  int32_t groupSeqIdFromMstTDSeqWeight_5__3; // w22
  int32_t seqId_5__4; // w23
  System_Tuple_int__int__int__o *v119; // x19
  bool result; // w0
  int32_t limitCount; // w1
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *_8__1; // x22
  System_String_o *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  System_String_o *v130; // x0
  System_String_o *v131; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v138; // x8
  System_String_o *sequencePath; // x22
  __int64 v140; // x1
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v141; // x22
  System_String_o *v142; // x0
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  System_String_o *nobleDataPath_5__5; // x22
  __int64 v150; // x2
  __int64 v151; // x3
  System_String_o *v152; // x0
  System_String_o *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v160; // x22
  System_String_o *v161; // x20
  AssetLoader_LoadEndDataHandler_o *v162; // x21
  __int64 v163; // x1
  struct ServantAssetLoadManager___c__DisplayClass156_0_o *v164; // x8
  _BOOL4 isNext; // w20
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *v168; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4B154C1 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v21, v22);
    sub_1BCA7E0(&int___TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v31, v32);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    sub_1BCA7E0(&Method_System_Tuple_int__int__get_Item1__, v41, v42);
    sub_1BCA7E0(&Method_System_Tuple_int__int__get_Item2__, v43, v44);
    sub_1BCA7E0(&Method_System_Tuple_int__int__int___ctor__, v45, v46);
    sub_1BCA7E0(&System_Tuple_int__int__int__TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__0__, v49, v50);
    sub_1BCA7E0(&Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__1__, v51, v52);
    sub_1BCA7E0(&ServantAssetLoadManager___c__DisplayClass156_0_TypeInfo, v53, v54);
    sub_1BCA7E0(&StringLiteral_9633/*"NoblePhantasm/"*/, v55, v56);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)sub_1BCA7E0(&StringLiteral_9635/*"NoblePhantasm/Sequence/"*/, v57, v58);
    byte_4B154C1 = 1;
  }
  effectIdList = 0LL;
  v168 = 0LL;
  entity = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v60 = (Il2CppObject *)sub_1BCAA2C(ServantAssetLoadManager___c__DisplayClass156_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v60, 0LL);
      v8->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass156_0_o *)v60;
      p__8__1 = &v8->fields.__8__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v60, v62, v63, v64, v65, v66, v67);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_95;
      v74 = (int64_t)v8->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v74;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v74, v68, v69, v70, v71, v72, v73);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_95;
      parent = (int64_t)v8->fields.parent;
      *(_QWORD *)&this->fields.treasureDvcId = parent;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.treasureDvcId, parent, v75, v76, v77, v78, v79, v80);
      if ( !*p__8__1 )
        goto LABEL_95;
      (*p__8__1)->fields.isNext = 0;
      if ( !_4__this )
        goto LABEL_95;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, 0LL);
      *(_QWORD *)&v8->fields._seqIdFromMstTDSeqWeight_5__2 = 0LL;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v82);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
      if ( !this )
        goto LABEL_95;
      EntityWithCommonPattern = TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
                                  (TreasureDeviceSequenceWeightMaster_o *)this,
                                  v8->fields.treasureDvcId,
                                  v8->fields.limitCount,
                                  v8->fields.npChargeStage,
                                  0LL);
      if ( !EntityWithCommonPattern )
        goto LABEL_64;
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(
                                                                               EntityWithCommonPattern,
                                                                               0LL);
      if ( !this )
        goto LABEL_95;
      v84 = this;
      _1__state = this->fields.__1__state;
      if ( _1__state < 1 )
      {
        _1__state = v8->fields._seqIdFromMstTDSeqWeight_5__2;
        if ( _1__state <= 0 )
        {
LABEL_64:
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
          if ( !this )
            goto LABEL_95;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &v168,
                 v8->fields.treasureDvcId,
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
          {
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v168;
            if ( !v168 )
              goto LABEL_95;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)TreasureDvcEntity__IsRandomTD(
                                                                                     (TreasureDvcEntity_o *)v168,
                                                                                     0LL);
            if ( !v168 )
              goto LABEL_95;
            limitCount = v8->fields.limitCount;
            if ( ((unsigned __int8)this & 1) != 0 )
              _1__state = TreasureDvcEntity__getRandomSeqIdEachLimit((TreasureDvcEntity_o *)v168, limitCount, 0, 0LL);
            else
              _1__state = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)v168, limitCount, 0LL);
          }
          else
          {
            _1__state = v8->fields.treasureDvcId;
          }
        }
      }
      else
      {
        v8->fields._seqIdFromMstTDSeqWeight_5__2 = _1__state;
        v86 = *(&v84->fields.__1__state + 1);
        if ( v86 >= 1 )
          v8->fields._groupSeqIdFromMstTDSeqWeight_5__3 = v86;
      }
      v8->fields._seqId_5__4 = _1__state;
      _8__1 = v8->fields.__8__1;
      v123 = System_Int32__ToString((int)v8 + 96, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)System_String__Concat_62401220(
                                                                               (System_String_o *)StringLiteral_9635/*"NoblePhantasm/Sequence/"*/,
                                                                               v123,
                                                                               0LL);
      if ( !_8__1 )
        goto LABEL_95;
      _8__1->fields.sequencePath = (struct System_String_o *)this;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&_8__1->fields.sequencePath,
        (int64_t)this,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
      v130 = System_Int32__ToString((int)v8 + 96, 0LL);
      v131 = System_String__Concat_62401220((System_String_o *)StringLiteral_9633/*"NoblePhantasm/"*/, v130, 0LL);
      v8->fields._nobleDataPath_5__5 = v131;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._nobleDataPath_5__5,
        (int64_t)v131,
        v132,
        v133,
        v134,
        v135,
        v136,
        v137);
      v138 = v8->fields.__8__1;
      if ( !v138 )
        goto LABEL_95;
      sequencePath = v138->fields.sequencePath;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( !AssetManager__isExistAssetStorage(sequencePath, 0LL) )
      {
        v141 = v8->fields.__8__1;
        v142 = System_Int32__ToString((int)v8 + 60, 0LL);
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)System_String__Concat_62401220(
                                                                                 (System_String_o *)StringLiteral_9635/*"NoblePhantasm/Sequence/"*/,
                                                                                 v142,
                                                                                 0LL);
        if ( !v141 )
          goto LABEL_95;
        v141->fields.sequencePath = (struct System_String_o *)this;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v141->fields.sequencePath,
          (int64_t)this,
          v143,
          v144,
          v145,
          v146,
          v147,
          v148);
      }
      nobleDataPath_5__5 = v8->fields._nobleDataPath_5__5;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v140);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)AssetManager__isExistAssetStorage(
                                                                               nobleDataPath_5__5,
                                                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v152 = System_Int32__ToString((int)v8 + 60, 0LL);
        v153 = System_String__Concat_62401220((System_String_o *)StringLiteral_9633/*"NoblePhantasm/"*/, v152, 0LL);
        v8->fields._nobleDataPath_5__5 = v153;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._nobleDataPath_5__5,
          (int64_t)v153,
          v154,
          v155,
          v156,
          v157,
          v158,
          v159);
      }
      v160 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_95;
      v160->fields.isNext = 0;
      v161 = v160->fields.sequencePath;
      v162 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(
                                                   AssetLoader_LoadEndDataHandler_TypeInfo,
                                                   method,
                                                   v150,
                                                   v151);
      AssetLoader_LoadEndDataHandler___ctor(
        v162,
        (Il2CppObject *)v160,
        Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v163);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)AssetManager__loadAssetStorage(
                                                                               v161,
                                                                               v162,
                                                                               1,
                                                                               0LL);
LABEL_89:
      v164 = v8->fields.__8__1;
      if ( !v164 )
        goto LABEL_95;
      isNext = v164->fields.isNext;
      v8->fields.__2__current = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !isNext )
      {
        result = 1;
        v8->fields.__1__state = 1;
        return result;
      }
      v8->fields.__1__state = 2;
      return 1;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_89;
    case 2:
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_95;
      this->fields.__4__this = 0LL;
      p__4__this = &this->fields.__4__this;
      *((_BYTE *)p__4__this - 8) = 0;
      sub_1BCA784((PartyOrganizationUtility_o *)p__4__this, 0LL, v2, v3, v4, v5, v6, v7);
      v88 = v8->fields._nobleDataPath_5__5;
      v89 = (Il2CppObject *)v8->fields.__8__1;
      v93 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v90, v91, v92);
      AssetLoader_LoadEndDataHandler___ctor(
        v93,
        v89,
        Method_ServantAssetLoadManager___c__DisplayClass156_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v94);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)AssetManager__loadAssetStorage(
                                                                               v88,
                                                                               v93,
                                                                               1,
                                                                               0LL);
LABEL_22:
      v95 = v8->fields.__8__1;
      if ( !v95 )
        goto LABEL_95;
      if ( v95->fields.isNext )
      {
        sequence = (UnityEngine_Object_o *)v95->fields.sequence;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( !UnityEngine_Object__op_Inequality(sequence, 0LL, 0LL) )
          goto LABEL_56;
        v104 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           v97,
                                                           v98,
                                                           v99);
        System_Collections_Generic_List_int____ctor(
          v104,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v104;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_95;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)DataManager__GetMasterData_object_(
                                                                                 (DataManager_o *)this,
                                                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        if ( !this )
          goto LABEL_95;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                 (TreasureDvcLvMaster_o *)this,
                                                                                 &entity,
                                                                                 v8->fields.treasureDvcId,
                                                                                 v8->fields.treasureDvcLv,
                                                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_95;
          funcId = entity->fields.funcId;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
          BattleEffectUtility__AddRelatedFunctionEffectIdList(funcId, &effectIdList, 0LL);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)entity;
          if ( !entity )
LABEL_95:
            sub_1BCAA3C(this, method);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                   entity,
                                                                                   0LL);
          if ( (int)this >= 1 )
          {
            v106 = (int)this;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)sub_1BCA888(int___TypeInfo, 1LL);
            if ( !this )
              goto LABEL_95;
            method = (const MethodInfo *)this;
            if ( !LODWORD(this->fields.__2__current) )
LABEL_96:
              sub_1BCAA44(this, method);
            LODWORD(this->fields.__4__this) = v106;
            if ( !_4__this )
              goto LABEL_95;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                     _4__this,
                                                                                     (System_Int32_array *)this,
                                                                                     0LL);
          }
        }
        v107 = v8->fields.__8__1;
        if ( !v107 )
          goto LABEL_95;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)v107->fields.sequence;
        if ( !this )
          goto LABEL_95;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
        if ( this )
        {
          _2__current = (int)this->fields.__2__current;
          v109 = this;
          if ( _2__current >= 1 )
          {
            v110 = 0LL;
            while ( (unsigned int)v110 < _2__current )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)*((_QWORD *)&v109->fields.__4__this
                                                                                     + v110);
              if ( !this )
                goto LABEL_95;
              WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                (WellFired_USFGOActorBattleActionEvent_o *)this,
                &effectIdList,
                0LL);
              _2__current = (int)v109->fields.__2__current;
              if ( (int)++v110 >= _2__current )
                goto LABEL_47;
            }
            goto LABEL_96;
          }
        }
LABEL_47:
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)effectIdList;
        if ( !effectIdList )
          goto LABEL_95;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)System_Collections_Generic_List_int___ToArray(
                                                                                 effectIdList,
                                                                                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !_4__this )
          goto LABEL_95;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                 _4__this,
                                                                                 (System_Int32_array *)this,
                                                                                 0LL);
        if ( !_4__this->fields.nobleEffectList )
          goto LABEL_95;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)_4__this->fields.nobleEffectList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_52:
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
        if ( ServantAssetLoadManager__checkLoad(0LL) )
        {
          v8->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, 0LL, v98, v99, v100, v101, v102, v103);
          v112 = 4;
        }
        else
        {
LABEL_56:
          v8->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, 0LL, v98, v99, v100, v101, v102, v103);
          v112 = 5;
        }
      }
      else
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v112 = 3;
      }
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v112;
      return 1;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_52;
    case 5:
      v113 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v113 )
        goto LABEL_95;
      v114 = v113->fields.sequence;
      callback = v8->fields.callback;
      seqIdFromMstTDSeqWeight_5__2 = v8->fields._seqIdFromMstTDSeqWeight_5__2;
      groupSeqIdFromMstTDSeqWeight_5__3 = v8->fields._groupSeqIdFromMstTDSeqWeight_5__3;
      seqId_5__4 = v8->fields._seqId_5__4;
      v119 = (System_Tuple_int__int__int__o *)sub_1BCAA2C(System_Tuple_int__int__int__TypeInfo, method, v2, v3);
      System_Tuple_int__int__int____ctor(
        v119,
        seqIdFromMstTDSeqWeight_5__2,
        groupSeqIdFromMstTDSeqWeight_5__3,
        seqId_5__4,
        (const MethodInfo_3873D2C *)Method_System_Tuple_int__int__int___ctor__);
      if ( !callback )
        goto LABEL_95;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct UnityEngine_GameObject_o *, System_Tuple_int__int__int__o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        v114,
        v119,
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__156_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0C960;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
LABEL_8:
    v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v14;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = (Il2CppObject *)sub_1A0C984;
LABEL_6:
  this->fields.m_target = v13;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C908;
}


System_IAsyncResult_o *__fastcall ServantAssetLoadManager_onGameObjectLoadComplete__BeginInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__int__o *paramsFromMstTDSeqWeight,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7[2]; // [xsp+8h] [xbp-28h] BYREF

  v7[0] = (__int64)obj;
  v7[1] = (__int64)paramsFromMstTDSeqWeight;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v7, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__int__o *paramsFromMstTDSeqWeight,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, System_Tuple_int__int__int__o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    obj,
    paramsFromMstTDSeqWeight,
    *(_QWORD *)&this->fields.extra_arg);
}