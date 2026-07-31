void ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__ServantAssetArgs__c *v1; // x0
  System_Collections_Generic_Dictionary_object__object__o *v2; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  struct ServantAssetLoadManager_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5937859 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937859 = 1;
  }
  v1 = System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo;
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v2 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(v1);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v2,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v2;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->unloadIgnoredAssetArgs,
    (int32_t)v2,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (int)StringLiteral_1/*""*/;
  v11 = ServantAssetLoadManager_TypeInfo->static_fields;
  v11->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->wkSpace, v10, v12, v13, v14, v15, v16, v17);
}


void ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_Dictionary_int__object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_object__o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_Dictionary_string__Object__c *v52; // x0
  System_Collections_Generic_Dictionary_object__object__o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7

  if ( (byte_5937858 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__Object__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
    byte_5937858 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadedList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadlist, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.downloadlist,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.ActorVoice, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.LastActorVoice,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v38;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bgAssetDataList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v45;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nobleEffectList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = System_Collections_Generic_Dictionary_string__Object__TypeInfo;
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v53 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(v52);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v53,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v53;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._releaseAssets,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_5937845 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    byte_5937845 = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    sub_21FFECC(0, path);
  return System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           (Il2CppObject *)path,
           (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__);
}


void ServantAssetLoadManager__DebugPrint(ServantAssetLoadManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  int v4; // w9

  if ( !data || (this = (ServantAssetLoadManager_o *)AssetData__GetObjectNameList(data, 0)) == 0 )
    sub_21FFECC(this, data);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v4 = m_CancellationTokenSource & ~(m_CancellationTokenSource >> 31);
    do
    {
      if ( !m_CancellationTokenSource )
        sub_21FFED4(this);
      --v4;
      --m_CancellationTokenSource;
    }
    while ( v4 );
  }
}


void ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_59377D7 & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377D7 = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method, v2);
  ServantAssetLoadManager__PreloadAssetsByArgs(args, 1, 0, v3);
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
  const MethodInfo_476E8C0 *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  ServantAssetLoadManager_c *v7; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *currentValue; // x19
  int v12; // w24
  __int64 v13; // x2
  ServantAssetLoadManager_c *v14; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5937844 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
    byte_5937844 = 1;
  }
  v3 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__;
  memset(&v15, 0, sizeof(v15));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(Instance[1].fields._syncRoot) = 3;
  v7 = ServantAssetLoadManager_TypeInfo;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v5, v6);
    v7 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v7->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          Instance,
                                                                          (const MethodInfo_3FCA28C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3C9BB94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v15,
           (const MethodInfo_413634C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v8 )
      break;
    currentValue = v15.fields._currentValue;
    if ( !v15.fields._currentValue )
      sub_21FFECC(v8, v9);
    if ( *(int *)((char *)&v15.fields._currentValue->klass + (unsigned __int64)&qword_68 + 4) >= 1 )
    {
      v12 = 0;
      do
      {
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9, v10);
        ServantAssetLoadManager__UnloadAssetsByArgs((ServantAssetArgs_o *)currentValue, 0, v10);
        ++v12;
      }
      while ( v12 < *(_DWORD *)((char *)&qword_68 + (_QWORD)currentValue + 4) );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v15,
    (const MethodInfo_4136348 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v14 = ServantAssetLoadManager_TypeInfo;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v5, v13);
    v14 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v14->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_22:
    sub_21FFECC(Instance, v5);
  System_Collections_Generic_Dictionary_object__object___Clear(
    Instance,
    (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
}


bool ServantAssetLoadManager__ExistPreloadBattleActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_59377F0 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&AssetManager_TypeInfo);
    byte_59377F0 = 1;
  }
  PreloadBattleActorFolderName = ServantAssetLoadManager__GetPreloadBattleActorFolderName(
                                   this,
                                   svtId,
                                   limitCount,
                                   appearanceId,
                                   isForce,
                                   method);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v11);
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

  if ( (byte_5937825 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937825 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v10);
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
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v19; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  int32_t v25; // [xsp+8h] [xbp-58h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5937826 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&Voice_TypeInfo);
    sub_21FFC50(&StringLiteral_26393/*"{0:D0}_{1}"*/);
    sub_21FFC50(&StringLiteral_13274/*"Servants_"*/);
    byte_5937826 = 1;
  }
  v26 = 0;
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v12);
  if ( overwriteSvtVoiceId )
    v14 = overwriteSvtVoiceId;
  else
    v14 = VoiceId;
  v25 = VoicePrefix;
  v26 = v14;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v25);
  if ( !*(&Voice_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v15, v16);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0);
  v19 = System_String__Format_75484576((System_String_o *)StringLiteral_26393/*"{0:D0}_{1}"*/, v17, FileName, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v21 = System_Int32__ToString((int32_t)&v26, 0);
  v22 = System_String__Concat_75438412((System_String_o *)StringLiteral_13274/*"Servants_"*/, v21, 0);
  if ( !Instance )
    sub_21FFECC(v22, v23);
  return SoundManager__IsExistsSound((SoundManager_o *)Instance, v22, v19, 0);
}


System_Collections_IEnumerator_o *ServantAssetLoadManager__GetAheadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5937830 & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager__GetAheadBg_d__163_TypeInfo);
    byte_5937830 = 1;
  }
  v7 = sub_21FFEBC(ServantAssetLoadManager__GetAheadBg_d__163_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)bgList, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *ServantAssetLoadManager__GetCommandCodeFolderName(int32_t commandCodeId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937842 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4754/*"CommandCodes/Texture/"*/);
    byte_5937842 = 1;
  }
  v5 = commandCodeId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v5);
  return System_String__Concat((Il2CppObject *)StringLiteral_4754/*"CommandCodes/Texture/"*/, v3, 0);
}


System_String_o *ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5937829 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937829 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal((ServantAssetLoadManager_o *)Instance, uniqueId, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  __int64 v6; // x2
  ServantAssetLoadManager_c *v8; // x0

  if ( (byte_593782A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_593782A = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                  (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_10:
    sub_21FFECC(LastActorVoice, *(_QWORD *)&uniqueId);
  }
  v8 = ServantAssetLoadManager_TypeInfo;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&uniqueId, v6);
    v8 = ServantAssetLoadManager_TypeInfo;
  }
  return v8->static_fields->wkSpace;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantAssetLoadManager__GetLimitImageIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitDiff,
        const MethodInfo *method)
{
  int v5; // w19

  v5 = limitCount;
  if ( (byte_59377B9 & 1) == 0 )
  {
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    byte_59377B9 = 1;
  }
  if ( v5 <= 10 )
  {
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&limitDiff);
    return ImageLimitCount__GetImageLimitCount(svtId, v5, 0) + limitDiff;
  }
  return v5;
}


int32_t ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5937846 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_Path_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937846 = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  klass = Instance[7].klass;
  if ( !klass )
    return 0;
  namespaze = (System_String_o *)klass->_1.namespaze;
  result = 0;
  if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v2, v3);
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
  int32_t VoicePrefix; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937822 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26393/*"{0:D0}_{1}"*/);
    byte_5937822 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &VoicePrefix);
  return System_String__Format_75484576((System_String_o *)StringLiteral_26393/*"{0:D0}_{1}"*/, v9, (Il2CppObject *)voiceId, 0);
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
  int v10; // w8
  int32_t v11; // w0
  int32_t v13; // w0

  if ( (byte_59377EE & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377EE = 1;
  }
  v10 = *(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1);
  if ( appearanceId < 1 )
  {
    if ( isForce )
    {
      if ( !v10 )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
      v11 = svtId;
      return ServantAssetLoadManager__getActorFolderName_47621976(v11, *(const MethodInfo **)&svtId);
    }
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    v13 = svtId;
  }
  else
  {
    if ( isForce )
    {
      if ( !v10 )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
      v11 = appearanceId;
      return ServantAssetLoadManager__getActorFolderName_47621976(v11, *(const MethodInfo **)&svtId);
    }
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    v13 = appearanceId;
  }
  return ServantAssetLoadManager__getActorFolderName(v13, limitCount, *(const MethodInfo **)&limitCount);
}


System_Func_Shader__Shader__Shader__o *ServantAssetLoadManager__GetReplaceChocoShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantAssetLoadManager___c_c *v4; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_T1__T2__TResult__o *_9__99_0; // x20
  Il2CppObject *v7; // x21
  struct ServantAssetLoadManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Object_array *ComponentsInChildren_object__59262092; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v19; // x19

  if ( (byte_59377F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleServantDeadComponent_getReplaceChocoShader__);
    sub_21FFC50(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__99_0__);
    sub_21FFC50(&ServantAssetLoadManager___c_TypeInfo);
    byte_59377F9 = 1;
  }
  v4 = ServantAssetLoadManager___c_TypeInfo;
  if ( !*(&ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo, method, v2);
    v4 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__99_0 = (System_Func_T1__T2__TResult__o *)static_fields->__9__99_0;
  if ( !_9__99_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__99_0 = (System_Func_T1__T2__TResult__o *)sub_21FFEBC(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__99_0,
      v7,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__99_0__,
      0);
    v8 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v8->__9__99_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__99_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__99_0, (int32_t)_9__99_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !obj )
    sub_21FFECC(v4, method);
  ComponentsInChildren_object__59262092 = UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                            obj,
                                            (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__59262092 && (max_length = ComponentsInChildren_object__59262092->max_length) != 0 )
  {
    if ( !(_DWORD)max_length )
      sub_21FFED4(ComponentsInChildren_object__59262092);
    v19 = ComponentsInChildren_object__59262092->m_Items[0];
  }
  else
  {
    v19 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
  {
    _9__99_0 = (System_Func_T1__T2__TResult__o *)sub_21FFEBC(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__99_0,
      v19,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      0);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__99_0;
}


System_Func_Shader__Shader__Shader__o *ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantAssetLoadManager___c_c *v4; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_T1__T2__TResult__o *_9__98_0; // x20
  Il2CppObject *v7; // x21
  struct ServantAssetLoadManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Object_array *ComponentsInChildren_object__59262092; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v19; // x19

  if ( (byte_59377F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleServantDeadComponent_getReplaceDeadShader__);
    sub_21FFC50(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__98_0__);
    sub_21FFC50(&ServantAssetLoadManager___c_TypeInfo);
    byte_59377F8 = 1;
  }
  v4 = ServantAssetLoadManager___c_TypeInfo;
  if ( !*(&ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo, method, v2);
    v4 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__98_0 = (System_Func_T1__T2__TResult__o *)static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_21FFEBC(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v7,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__98_0__,
      0);
    v8 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v8->__9__98_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__98_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__98_0, (int32_t)_9__98_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !obj )
    sub_21FFECC(v4, method);
  ComponentsInChildren_object__59262092 = UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                            obj,
                                            (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__59262092 && (max_length = ComponentsInChildren_object__59262092->max_length) != 0 )
  {
    if ( !(_DWORD)max_length )
      sub_21FFED4(ComponentsInChildren_object__59262092);
    v19 = ComponentsInChildren_object__59262092->m_Items[0];
  }
  else
  {
    v19 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
  {
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_21FFEBC(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v19,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      0);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__98_0;
}


System_String_o *ServantAssetLoadManager__GetStatusUiPath(int32_t statusUiType, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593784A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3217/*"Battle/StatusUi/{0}"*/);
    byte_593784A = 1;
  }
  v5 = statusUiType;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3217/*"Battle/StatusUi/{0}"*/, v3, 0);
}


bool ServantAssetLoadManager__IsColorMatrixActive(UnityEngine_GameObject_o *targetRoot, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *monitor; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x19

  if ( (byte_59377FD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleCharaColorMatrixComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59377FD = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetRoot, 0, 0);
  if ( !v4 )
  {
    if ( !targetRoot )
      goto LABEL_21;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         targetRoot,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v4 )
    {
      if ( !Component_object )
        goto LABEL_21;
      monitor = (UnityEngine_Object_o *)Component_object[2].monitor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
      v4 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
      if ( v4 )
      {
        targetRoot = (UnityEngine_GameObject_o *)Component_object[2].monitor;
        if ( !targetRoot )
          goto LABEL_21;
      }
    }
    v13 = UnityEngine_GameObject__GetComponent_object_(
            targetRoot,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaColorMatrixComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
    if ( v4 )
    {
      if ( v13 )
        return BYTE4(v13[16].monitor) != 0;
LABEL_21:
      sub_21FFECC(v4, v5);
    }
  }
  return 0;
}


bool ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantData_o *v3; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v6; // x0

  v3 = data;
  if ( (byte_59377DC & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377DC = 1;
  }
  if ( !v3 )
    sub_21FFECC(data, method);
  if ( v3->fields.isEnemy )
    return 1;
  if ( v3->fields.followerType )
    return 0;
  uniqueId = v3->fields.uniqueId;
  v6 = ServantAssetLoadManager_TypeInfo;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method, v2);
    v6 = ServantAssetLoadManager_TypeInfo;
  }
  return uniqueId <= v6->static_fields->KeepAssetPlayerServantCount;
}


bool ServantAssetLoadManager__IsKeepAssetAvailable(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v9; // x19
  intptr_t m_CachedPtr; // x8

  if ( (byte_5937843 & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6696/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/);
    byte_5937843 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6696/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0) > 0 )
    return 0;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v2, v3);
  if ( OptionManager__isSavedMemoryMode(0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  klass = Instance[2].klass;
  if ( klass
    && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
        *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment) )
  {
    if ( *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
      v9 = (UnityEngine_Object_o *)Instance[2].klass;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v9 || (m_CachedPtr = v9[2].fields.m_CachedPtr) == 0 )
LABEL_21:
    sub_21FFECC(Instance, v5);
  return *(_BYTE *)(m_CachedPtr + 760) != 0;
}


bool ServantAssetLoadManager__IsPreloadedBattleActor(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_59377EF & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&AssetManager_TypeInfo);
    byte_59377EF = 1;
  }
  if ( !args )
    sub_21FFECC(this, args);
  PreloadBattleActorFolderName = ServantAssetLoadManager__GetPreloadBattleActorFolderName(
                                   this,
                                   args->fields._SvtId_k__BackingField,
                                   args->fields._LoadActorLimitCount_k__BackingField,
                                   args->fields._AppearanceId_k__BackingField,
                                   isForce,
                                   v4);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  return AssetManager__getAssetStorage(PreloadBattleActorFolderName, 0) != 0;
}


bool ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593782D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593782D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)Instance[5].klass;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)Instance,
         uniqueId,
         (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)Instance[5].klass;
      if ( Instance )
      {
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                     uniqueId,
                     (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance[2].monitor) != 0;
      }
    }
LABEL_11:
    sub_21FFECC(Instance, v4);
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

  if ( (byte_5937850 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937850 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  int v9; // w8
  System_String_o *ActorFolderName_47621976; // x0
  System_String_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *AssetObject_object; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x19

  if ( (byte_5937851 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5561/*"DropJumpingOverwriteData"*/);
    sub_21FFC50(&StringLiteral_5559/*"DropHighPositionOverwriteData"*/);
    byte_5937851 = 1;
  }
  v9 = *(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1);
  if ( isForce )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName_47621976(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  v11 = ActorFolderName_47621976;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         ActorFolderName_47621976,
                         (System_String_o *)StringLiteral_5559/*"DropHighPositionOverwriteData"*/,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  v15 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
  {
    v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
      v15,
      (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__);
    if ( !v15 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_Int32Enum__object___Add(
      v15,
      2,
      AssetObject_object,
      (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
  }
  v20 = ServantAssetLoadManager__getAssetObject_object_(
          this,
          v11,
          (System_String_o *)StringLiteral_5561/*"DropJumpingOverwriteData"*/,
          (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0) )
  {
    if ( v15
      || (v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo),
          System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
            v15,
            (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__),
          v15) )
    {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add(
        v15,
        1,
        v20,
        (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
      return (System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *)v15;
    }
LABEL_22:
    sub_21FFECC(v16, v17);
  }
  return (System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *)v15;
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

  if ( (byte_5937856 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937856 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  int v9; // w8
  System_String_o *ActorFolderName_47621976; // x0
  System_String_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *AssetObject_object; // x22
  System_Collections_Generic_List_object__o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x19
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0

  if ( (byte_5937857 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptableObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptableObject__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptableObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ScriptableObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5564/*"DropTimingAdjustData"*/);
    sub_21FFC50(&StringLiteral_5563/*"DropPositionRandomData"*/);
    byte_5937857 = 1;
  }
  v9 = *(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1);
  if ( isForce )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName_47621976(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  v11 = ActorFolderName_47621976;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         ActorFolderName_47621976,
                         (System_String_o *)StringLiteral_5564/*"DropTimingAdjustData"*/,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  v15 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ScriptableObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ScriptableObject___ctor__);
    if ( !v15 )
      goto LABEL_30;
    items = v15->fields._items;
    v25 = Method_System_Collections_Generic_List_ScriptableObject__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_30;
    size = v15->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        AssetObject_object,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v27[4] = (Il2CppClass *)AssetObject_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v27 + 4),
        (int32_t)AssetObject_object,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
  }
  v30 = ServantAssetLoadManager__getAssetObject_object_(
          this,
          v11,
          (System_String_o *)StringLiteral_5563/*"DropPositionRandomData"*/,
          (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
  v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0, 0);
  if ( v16 )
  {
    if ( v15
      || (v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ScriptableObject__TypeInfo),
          System_Collections_Generic_List_object____ctor(
            v15,
            (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ScriptableObject___ctor__),
          v15) )
    {
      v37 = v15->fields._items;
      v38 = Method_System_Collections_Generic_List_ScriptableObject__Add__;
      ++v15->fields._version;
      if ( v37 )
      {
        v39 = v15->fields._size;
        if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            v30,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &v37->obj.klass + v39;
          v15->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)v30;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v30, v31, v32, v33, v34, v35, v36);
        }
        return (UnityEngine_ScriptableObject_array *)System_Collections_Generic_List_object___ToArray(
                                                       v15,
                                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ScriptableObject__ToArray__);
      }
    }
LABEL_30:
    sub_21FFECC(v16, v17);
  }
  if ( !v15 )
    return 0;
  return (UnityEngine_ScriptableObject_array *)System_Collections_Generic_List_object___ToArray(
                                                 v15,
                                                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ScriptableObject__ToArray__);
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

  if ( (byte_5937852 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937852 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  int v9; // w8
  System_String_o *ActorFolderName_47621976; // x0

  if ( (byte_5937853 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_BattleDropPointAdjustSetting___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5562/*"DropPointAdjustData"*/);
    byte_5937853 = 1;
  }
  v9 = *(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1);
  if ( isForce )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName_47621976(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  return (BattleDropPointAdjustSetting_o *)ServantAssetLoadManager__getAssetObject_object_(
                                             this,
                                             ActorFolderName_47621976,
                                             (System_String_o *)StringLiteral_5562/*"DropPointAdjustData"*/,
                                             (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_BattleDropPointAdjustSetting___);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadBattlePointGauge(
        int32_t battlePointId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_593784C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593784C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  return ServantAssetLoadManager__LoadBattlePointGaugeLocal(
           (ServantAssetLoadManager_o *)Instance,
           battlePointId,
           parent,
           v7);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *ServantAssetLoadManager__LoadBattlePointGaugeLocal(
        ServantAssetLoadManager_o *this,
        int32_t battlePointId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_String_o *GaugeAssetPath; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *AssetObject_object; // x20

  if ( (byte_593784D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_21FFC50(&StringLiteral_3243/*"BattlePointGauge"*/);
    byte_593784D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&battlePointId, parent);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v8);
  if ( BattlePointMaster__IsHideGaugeAllTime((BattlePointMaster_o *)Master_object, battlePointId, 0) )
    return 0;
  GaugeAssetPath = BattlePointMaster__GetGaugeAssetPath(battlePointId, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         GaugeAssetPath,
                         (System_String_o *)StringLiteral_3243/*"BattlePointGauge"*/,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59506996(
                                       AssetObject_object,
                                       parent,
                                       (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
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

  if ( (byte_5937854 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937854 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  int v9; // w8
  System_String_o *ActorFolderName_47621976; // x0

  if ( (byte_5937855 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_BattleServantParamSetting___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3249/*"BattleServantParamSettingData"*/);
    byte_5937855 = 1;
  }
  v9 = *(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1);
  if ( isForce )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName_47621976(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  return (BattleServantParamSetting_o *)ServantAssetLoadManager__getAssetObject_object_(
                                          this,
                                          ActorFolderName_47621976,
                                          (System_String_o *)StringLiteral_3249/*"BattleServantParamSettingData"*/,
                                          (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_BattleServantParamSetting___);
}


void ServantAssetLoadManager__LoadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *AheadBg; // x1

  AheadBg = ServantAssetLoadManager__GetAheadBg(this, bgList, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0);
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

  if ( (byte_593782E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593782E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v14);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83231452(v17, Manager__loadNoblePhantasmCoroutine, 0);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t unitIndex,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_5937803 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937803 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v10);
  return ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           treasureDeviceId,
           limit,
           name,
           unitIndex,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
        ServantAssetLoadManager_o *this,
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t unitIndex,
        const MethodInfo *method)
{
  int v11; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *ExecutingTdInfo; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  bool IsRandomTD; // w8
  int32_t SeqId; // w0
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  int32_t groupSeqId; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t MasterKind_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_5937804 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&BattleSequenceManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_21FFC50(&StringLiteral_9894/*"NoblePhantasm/"*/);
    byte_5937804 = 1;
  }
  MasterKind_k__BackingField = 0;
  entity = 0;
  v11 = *(&BattleSequenceManager_TypeInfo->_2.cctor_finished + 1);
  groupSeqId = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, *(_QWORD *)&treasureDeviceId, *(_QWORD *)&limit);
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleSequenceManager__SafeGetExecutingTdInfo(0);
  if ( !ExecutingTdInfo )
    goto LABEL_24;
  MasterKind_k__BackingField = ExecutingTdInfo->fields._MasterKind_k__BackingField;
  if ( MasterKind_k__BackingField > 0 )
    goto LABEL_19;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !ExecutingTdInfo )
    goto LABEL_24;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          ExecutingTdInfo,
          &entity,
          treasureDeviceId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    MasterKind_k__BackingField = treasureDeviceId;
    goto LABEL_19;
  }
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_24;
  IsRandomTD = TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)entity, 0);
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !IsRandomTD )
  {
    if ( entity )
    {
      SeqId = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, unitIndex, 0);
      goto LABEL_18;
    }
LABEL_24:
    sub_21FFECC(ExecutingTdInfo, v13);
  }
  if ( !entity )
    goto LABEL_24;
  SeqId = TreasureDvcEntity__GetRandomSeqIdEachLimit((TreasureDvcEntity_o *)entity, limit, &groupSeqId, 0, unitIndex, 0);
LABEL_18:
  MasterKind_k__BackingField = SeqId;
LABEL_19:
  v17 = System_Int32__ToString((int32_t)&MasterKind_k__BackingField, 0);
  v20 = System_String__Concat_75438412((System_String_o *)StringLiteral_9894/*"NoblePhantasm/"*/, v17, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18, v19);
  if ( !AssetManager__isExistAssetStorage(v20, 0) )
  {
    groupSeqId = 10 * (MasterKind_k__BackingField / 10);
    v21 = System_Int32__ToString((int32_t)&groupSeqId, 0);
    v20 = System_String__Concat_75438412((System_String_o *)StringLiteral_9894/*"NoblePhantasm/"*/, v21, 0);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v20,
                                       name,
                                       (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x21
  int32_t v19; // w22
  int32_t BattlePointId_k__BackingField; // w20

  if ( (byte_59377D6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377D6 = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, dlOnly, isShiftOrTransform);
  ServantAssetLoadManager__preloadServant(args, dlOnly, (const MethodInfo *)isShiftOrTransform);
  if ( !args )
LABEL_26:
    sub_21FFECC(Item, v8);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8, v9);
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v9);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8, v9);
    ServantAssetLoadManager__preloadWeaponEffect(
      WeaponEffectId_k__BackingField,
      EffectFolder_k__BackingField,
      dlOnly,
      v10);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8, v9);
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
    v19 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v19,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v19,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_26;
        ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Item->klass->vtable[10].methodPtr)(
          Item,
          dlOnly,
          Item->klass->vtable[10].method);
      }
      ++v19;
    }
    while ( v19 < skillList_k__BackingField->fields._size );
  }
  BattlePointId_k__BackingField = args->fields._BattlePointId_k__BackingField;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v16, v17);
  ServantAssetLoadManager__PreloadBattlePointGauge(BattlePointId_k__BackingField, dlOnly, v17);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__PreloadBattlePointGauge(int32_t battlePointId, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_String_o *GaugeAssetPath; // x20
  const MethodInfo *v8; // x4

  if ( (byte_593784B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593784B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, dlOnly, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    goto LABEL_9;
  if ( BattlePointMaster__IsHideGaugeAllTime((BattlePointMaster_o *)Master_object, battlePointId, 0) )
    return;
  GaugeAssetPath = BattlePointMaster__GetGaugeAssetPath(battlePointId, 0);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
LABEL_9:
    sub_21FFECC(Master_object, v6);
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

  if ( (byte_59377F5 & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377F5 = 1;
  }
  effectPath = 0;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, args, dlOnly);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, (const MethodInfo *)dlOnly) )
    ServantAssetLoadManager__setLoadList(this, effectPath, dlOnly, 0, v7);
}


bool ServantAssetLoadManager__SetNeedDownloadList(System_String_o *usmPath, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool IsExistAssetStorage; // w21
  const MethodInfo *v8; // x4

  if ( (byte_593780C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593780C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  IsExistAssetStorage = AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, usmPath, 0);
  if ( IsExistAssetStorage )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    if ( AssetManager__IsNeedDownload((AssetManager_o *)Instance, usmPath, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( Instance )
      {
        ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, usmPath, dlOnly, 0, v8);
        return IsExistAssetStorage;
      }
LABEL_10:
      sub_21FFECC(Instance, v6);
    }
  }
  return IsExistAssetStorage;
}


void ServantAssetLoadManager__ShowAssetNotFoundError(
        System_String_o *path,
        bool skipException,
        const MethodInfo *method)
{
  if ( (byte_59377D3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6361/*"ErrCode:002015\n指定のグループ又はIDのリソースが存在しません。\n[ resource path:"*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_59377D3 = 1;
  }
  System_String__Concat_75481624((System_String_o *)StringLiteral_6361/*"ErrCode:002015\n指定のグループ又はIDのリソースが存在しません。\n[ resource path:"*/, path, (System_String_o *)StringLiteral_16659/*"]"*/, 0);
}


void ServantAssetLoadManager__StopVoice(int32_t uniqueId, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_593782B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593782B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  ServantAssetLoadManager__localStopVoice((ServantAssetLoadManager_o *)Instance, uniqueId, fadeoutTime, v7);
}


bool ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(
        ServantAssetArgs_o *args,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  BattleDeckServantData_o *deckSvt_k__BackingField; // x8
  NpcServantDisplayTypeDetailMaster_o *v15; // x21
  int32_t DisplayType_k__BackingField; // w20
  char BattleCommonEffectPath; // w0
  __int64 v18; // x2
  int32_t effectId; // w20
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59377F7 & 1) == 0 )
  {
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59377F7 = 1;
  }
  entity = 0;
  *effectPath = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)effectPath, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( !args || !args->fields._deckSvt_k__BackingField )
    goto LABEL_11;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
  deckSvt_k__BackingField = args->fields._deckSvt_k__BackingField;
  if ( !deckSvt_k__BackingField )
    goto LABEL_17;
  v15 = (NpcServantDisplayTypeDetailMaster_o *)Master_object;
  DisplayType_k__BackingField = args->fields._DisplayType_k__BackingField;
  Master_object = (Il2CppObject *)BattleDeckServantData__GetDisplayColorType(deckSvt_k__BackingField, 0);
  if ( !v15 )
    goto LABEL_17;
  NpcServantDisplayTypeDetailMaster__TryGetEntity(v15, &entity, DisplayType_k__BackingField, (int32_t)Master_object, 0);
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
    sub_21FFECC(Master_object, v13);
  effectId = entity->fields.effectId;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v13, v18);
  BattleCommonEffectPath = BattleEffectUtility__TryGetBattleCommonEffectPath(effectPath, effectId, 0);
  return BattleCommonEffectPath & 1;
}


bool ServantAssetLoadManager__TryRegisterUnloadIgnoredArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  bool IsKeepAssetAvailable; // w20
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  ServantAssetLoadManager_c *v10; // x0
  System_Collections_Generic_Dictionary_object__object__o *unloadIgnoredAssetArgs; // x21
  ServantAssetLoadManager_c *v12; // x0
  System_Collections_Generic_Dictionary_object__object__o *v13; // x21

  if ( (byte_59377D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377D9 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  IsKeepAssetAvailable = ServantAssetLoadManager__IsKeepAssetAvailable(Instance, v4);
  if ( IsKeepAssetAvailable )
  {
    Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager_TypeInfo;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v4, v5);
      Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager_TypeInfo;
    }
    if ( args )
    {
      v7 = *(System_Collections_Generic_Dictionary_object__object__o **)(Instance[1].fields.m_CachedPtr + 8);
      Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0);
      if ( v7 )
      {
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v7,
                (Il2CppObject *)Instance,
                (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v10 = ServantAssetLoadManager_TypeInfo;
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8, v9);
            v10 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_object__object__o *)v10->static_fields->unloadIgnoredAssetArgs;
          Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_20;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            unloadIgnoredAssetArgs,
            (Il2CppObject *)Instance,
            (Il2CppObject *)args,
            (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v12 = ServantAssetLoadManager_TypeInfo;
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8, v9);
          v12 = ServantAssetLoadManager_TypeInfo;
        }
        v13 = (System_Collections_Generic_Dictionary_object__object__o *)v12->static_fields->unloadIgnoredAssetArgs;
        Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0);
        if ( v13 )
        {
          Instance = (ServantAssetLoadManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    v13,
                                                    (Il2CppObject *)Instance,
                                                    (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++HIDWORD(Instance->fields.nobleSequenceData);
            return IsKeepAssetAvailable;
          }
        }
      }
    }
LABEL_20:
    sub_21FFECC(Instance, v4);
  }
  return IsKeepAssetAvailable;
}


void ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  __int64 v4; // [xsp+0h] [xbp-60h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v5; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+10h] [xbp-50h] BYREF

  if ( (byte_5937832 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__);
    byte_5937832 = 1;
  }
  releaseAssets = this->fields._releaseAssets;
  memset(&v6, 0, sizeof(v6));
  if ( !releaseAssets )
    sub_21FFECC(0, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  v4 = 0;
  v5 = &v6;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v6,
            (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v6.fields._current.fields.value, 0);
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v6,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
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
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x20
  int32_t v16; // w21
  int32_t BattlePointId_k__BackingField; // w19

  if ( (byte_59377D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377D8 = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, isShiftOrTransform, method);
  ServantAssetLoadManager__unloadServant(args, (const MethodInfo *)isShiftOrTransform);
  if ( !args )
LABEL_26:
    sub_21FFECC(Item, v6);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v6, v7);
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v6);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v6, v7);
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v7);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v6, v7);
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v6);
  ServantAssetLoadManager__unloadFromDeckServant(
    args->fields._deckSvt_k__BackingField,
    args->fields._OriginalDeckSvt_k__BackingField,
    isShiftOrTransform,
    v12);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v16 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v16,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v16,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_26;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[11].methodPtr)(
          Item,
          Item->klass->vtable[11].method);
      }
      ++v16;
    }
    while ( v16 < skillList_k__BackingField->fields._size );
  }
  BattlePointId_k__BackingField = args->fields._BattlePointId_k__BackingField;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v13, v14);
  ServantAssetLoadManager__UnloadBattlePointGauge(BattlePointId_k__BackingField, v13);
}


void ServantAssetLoadManager__UnloadBattlePointGauge(int32_t battlePointId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_593784E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593784E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  ServantAssetLoadManager__UnloadBattlePointGaugeLocal((ServantAssetLoadManager_o *)Instance, battlePointId, v5);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__UnloadBattlePointGaugeLocal(
        ServantAssetLoadManager_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_String_o *GaugeAssetPath; // x1
  const MethodInfo *v8; // x2

  if ( (byte_593784F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593784F = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&battlePointId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v6);
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
  if ( (byte_5937841 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_5937841 = 1;
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
          sub_21FFED4(this);
        v7 = commandCodeIds->m_Items[v6];
        if ( v7 >= 1 )
        {
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, commandCodeIds, method);
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

  if ( (byte_59377F6 & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377F6 = 1;
  }
  effectPath = 0;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, args, method);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, method) )
    ServantAssetLoadManager__unloadTargetPathAssetLocal(this, effectPath, v5);
}


void ServantAssetLoadManager___GetAheadBg_b__163_0(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantAssetLoadManager_o *v9; // x20
  System_Collections_Generic_List_object__o *bgAssetDataList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_593785A & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_593785A = 1;
  }
  bgAssetDataList = (System_Collections_Generic_List_object__o *)v9->fields.bgAssetDataList;
  if ( !bgAssetDataList
    || (items = bgAssetDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++bgAssetDataList->fields._version,
        !items) )
  {
    sub_21FFECC(this, data);
  }
  size = bgAssetDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgAssetDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    bgAssetDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__changeChocoDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x23
  __int64 v3; // x2
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v5; // x25
  unsigned __int64 v6; // x19
  UnityEngine_Object_o *v7; // x20
  float v8; // s13
  float v9; // s14
  float v10; // s15
  float b; // s10
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v14; // x20
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  UnityEngine_Transform_o *NodeFromName; // x22
  __int64 v20; // x2
  UnityEngine_GameObject_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x23
  unsigned __int64 v23; // x27
  UnityEngine_Object_o *v24; // x24
  int v25; // w8
  UnityEngine_GameObject_o *v26; // x25
  unsigned int v27; // w28
  UnityEngine_GameObject_c **v28; // x8
  UnityEngine_Material_o *v29; // x26
  UnityEngine_Shader_o *v30; // x0
  float x; // s8
  float y; // s9
  float v33; // s8
  float v34; // s9
  float32x4_t v35; // q2
  float v36; // s8
  float v37; // s9
  float32x4_t v38; // q0
  float32x4_t v39; // q2
  float32x4_t v40; // q0
  float v41; // s8
  UnityEngine_GameObject_o *v42; // [xsp+10h] [xbp-110h]
  float a; // [xsp+18h] [xbp-108h]
  float value; // [xsp+1Ch] [xbp-104h]
  float32x4_t v45; // [xsp+20h] [xbp-100h]
  float32x4_t v46; // [xsp+30h] [xbp-F0h]
  float32x4_t v47; // [xsp+40h] [xbp-E0h]
  UnityEngine_Bounds_o v48; // [xsp+50h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v49; // [xsp+68h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_59377FB & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16777/*"_ClipSharpnessY"*/);
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    sub_21FFC50(&StringLiteral_22102/*"joint_all_Base"*/);
    sub_21FFC50(&StringLiteral_16763/*"_ChocoTex"*/);
    sub_21FFC50(&StringLiteral_26115/*"weapon"*/);
    sub_21FFC50(&StringLiteral_13350/*"Shaders/ChocoMap"*/);
    sub_21FFC50(&StringLiteral_17022/*"_Use_alphawidth"*/);
    sub_21FFC50(&StringLiteral_5091/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/);
    sub_21FFC50(&StringLiteral_18029/*"body"*/);
    obj = (UnityEngine_GameObject_o *)sub_21FFC50(&StringLiteral_16726/*"_AddColor"*/);
    byte_59377FB = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                      v2,
                                      (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v5 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v8 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    goto LABEL_13;
  }
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)klass )
      goto LABEL_54;
    v7 = (UnityEngine_Object_o *)*((_QWORD *)&v5[1].monitor + v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v5[1].klass;
    if ( (__int64)++v6 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v7 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v7, 0);
  if ( !obj )
    goto LABEL_53;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  value = 1.0;
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16781/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v7, 0);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16781/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    value = Color.fields.a;
    b = Color.fields.b;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v7, 0);
  if ( !obj )
LABEL_53:
    sub_21FFECC(obj, method);
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16726/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v7, 0);
    if ( obj )
    {
      v56 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16726/*"_AddColor"*/, 0);
      v10 = v56.fields.r;
      v9 = v56.fields.g;
      a = v56.fields.a;
      v8 = v56.fields.b;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
LABEL_13:
  v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5091/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13350/*"Shaders/ChocoMap"*/,
             (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(v2, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_22102/*"joint_all_Base"*/, 0, 0);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v17, v18);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v17);
  v21 = v5[1].klass;
  if ( (int)v21 >= 1 )
  {
    v22 = obj;
    v23 = 0;
    v42 = v5;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
        goto LABEL_54;
      v24 = (UnityEngine_Object_o *)*((_QWORD *)&v5[1].monitor + v23);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v20);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v24, 0, 0);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v24 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v24, 0);
        if ( !obj )
          goto LABEL_53;
        v25 = (int)obj[1].klass;
        v26 = obj;
        if ( v25 >= 1 )
          break;
      }
LABEL_41:
      v5 = v42;
      ++v23;
      LODWORD(v21) = v42[1].klass;
      if ( (__int64)v23 >= (int)v21 )
        return;
    }
    v27 = 0;
    while ( v27 < v25 )
    {
      v28 = &v26->klass + (int)v27;
      v29 = (UnityEngine_Material_o *)v28[4];
      if ( !v29 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v28[4], 0);
      if ( !v22 )
        goto LABEL_53;
      v30 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, intptr_t))v22[1].klass)(
                                      v22[2].fields.m_CachedPtr,
                                      obj,
                                      v14,
                                      v22[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v29, v30, 0);
      v53.fields.r = r;
      v53.fields.g = g;
      v53.fields.b = b;
      v53.fields.a = value;
      UnityEngine_Material__SetColor(v29, (System_String_o *)StringLiteral_16781/*"_Color"*/, v53, 0);
      v54.fields.r = v10;
      v54.fields.g = v9;
      v54.fields.b = v8;
      v54.fields.a = a;
      UnityEngine_Material__SetColor(v29, (System_String_o *)StringLiteral_16726/*"_AddColor"*/, v54, 0);
      UnityEngine_Material__SetTexture(v29, (System_String_o *)StringLiteral_16763/*"_ChocoTex"*/, (UnityEngine_Texture_o *)object, 0);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_18029/*"body"*/, 0) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_26115/*"weapon"*/, 0) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v24,
                                            0);
        if ( !obj )
          goto LABEL_53;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0);
        if ( !NodeFromName )
          goto LABEL_53;
        v51 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, position, 0);
        x = v51.fields.x;
        y = v51.fields.y;
        v46 = *(float32x4_t *)&v51.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0);
        v33 = x - localPosition.fields.x;
        v34 = y - localPosition.fields.y;
        v47 = *(float32x4_t *)&localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v49, (UnityEngine_Renderer_o *)v24, 0);
        v35.n128_u64[1] = 0x3F0000003F000000LL;
        v35.n128_u64[0] = LODWORD(v49.fields.m_Center.fields.z) | 0x3F00000000000000LL;
        v36 = v33 + v49.fields.m_Center.fields.x;
        v37 = v34 + v49.fields.m_Center.fields.y;
        v45 = v35;
        UnityEngine_Renderer__get_localBounds(&v49, (UnityEngine_Renderer_o *)v24, 0);
        v38.n128_u64[0] = __PAIR64__(LODWORD(v49.fields.m_Extents.fields.x), v46.n128_u32[0]);
        v48.fields.m_Center.fields.x = v36;
        v48.fields.m_Center.fields.y = v37;
        v38.n128_u64[1] = *(_QWORD *)&v49.fields.m_Extents.fields.y;
        v39.n128_u64[0] = 0x3F0000003F000000LL;
        v39.n128_u64[1] = 0x3F0000003F000000LL;
        v40 = vmulq_f32(vaddq_f32(v38, v38), v39);
        v40.n128_u32[0] = vaddq_f32(vsubq_f32(v46, v47), v45).n128_u32[0];
        *(float32x4_t *)&v48.fields.m_Center.fields.z = v40;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v24, &v48, 0);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v24, NodeFromName, 0);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v49, (UnityEngine_Renderer_o *)v24, 0);
        v41 = v49.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v49, (UnityEngine_Renderer_o *)v24, 0);
        UnityEngine_Material__SetFloat(
          v29,
          (System_String_o *)StringLiteral_16777/*"_ClipSharpnessY"*/,
          v41 - v49.fields.m_Extents.fields.y,
          0);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_83064036(
                                          v29,
                                          (System_String_o *)StringLiteral_17022/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_17022/*"_Use_alphawidth"*/, 1.0, 0);
      v25 = (int)v26[1].klass;
      if ( (int)++v27 >= v25 )
        goto LABEL_41;
    }
LABEL_54:
    sub_21FFED4(obj);
  }
}


void ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x19
  __int64 v3; // x2
  float v4; // s8
  UnityEngine_GameObject_c *klass; // x8
  float a; // s9
  UnityEngine_GameObject_o *v7; // x21
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  float v10; // s13
  float v11; // s14
  float v12; // s15
  float b; // s10
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v16; // x20
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  Il2CppObject *object; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  __int64 v21; // x2
  UnityEngine_GameObject_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x9
  unsigned __int64 v24; // x28
  UnityEngine_GameObject_o *v25; // x26
  UnityEngine_Object_o *v26; // x23
  int v27; // w8
  UnityEngine_GameObject_o *v28; // x23
  unsigned int v29; // w19
  UnityEngine_GameObject_c **v30; // x8
  UnityEngine_Material_o *v31; // x24
  UnityEngine_Shader_o *v32; // x0
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_59377FC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    sub_21FFC50(&StringLiteral_16763/*"_ChocoTex"*/);
    sub_21FFC50(&StringLiteral_5090/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_21FFC50(&StringLiteral_13350/*"Shaders/ChocoMap"*/);
    sub_21FFC50(&StringLiteral_17022/*"_Use_alphawidth"*/);
    obj = (UnityEngine_GameObject_o *)sub_21FFC50(&StringLiteral_16726/*"_AddColor"*/);
    byte_59377FC = 1;
  }
  if ( !v2 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                      v2,
                                      (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  v4 = 0.0;
  klass = obj[1].klass;
  a = 1.0;
  v7 = obj;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v10 = 0.0;
    v11 = 0.0;
    v12 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    goto LABEL_13;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)klass )
      goto LABEL_45;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&v7[1].monitor + v8);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v7[1].klass;
    if ( (__int64)++v8 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v9 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v9, 0);
  if ( !obj )
    goto LABEL_44;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16781/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v9, 0);
    if ( !obj )
      goto LABEL_44;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16781/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v9, 0);
  if ( !obj )
LABEL_44:
    sub_21FFECC(obj, method);
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16726/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v9, 0);
    if ( !obj )
      goto LABEL_44;
    v36 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16726/*"_AddColor"*/, 0);
    v4 = v36.fields.r;
    v10 = v36.fields.g;
    v11 = v36.fields.b;
    v12 = v36.fields.a;
  }
  else
  {
    v10 = 0.0;
    v11 = 0.0;
    v12 = 0.0;
  }
LABEL_13:
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5090/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13350/*"Shaders/ChocoMap"*/,
             (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v17, v18);
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(v2, v17);
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                      v2,
                                      (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  v22 = obj[1].klass;
  v23 = obj;
  if ( (int)v22 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v22 )
        goto LABEL_45;
      v25 = v23;
      v26 = (UnityEngine_Object_o *)*((_QWORD *)&v23[1].monitor + v24);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v21);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v26, 0, 0);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v26 )
          goto LABEL_44;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v26, 0);
        if ( !obj )
          goto LABEL_44;
        v27 = (int)obj[1].klass;
        v28 = obj;
        if ( v27 >= 1 )
          break;
      }
LABEL_32:
      LODWORD(v22) = v25[1].klass;
      ++v24;
      v23 = v25;
      if ( (__int64)v24 >= (int)v22 )
        return;
    }
    v29 = 0;
    while ( v29 < v27 )
    {
      v30 = &v28->klass + (int)v29;
      v31 = (UnityEngine_Material_o *)v30[4];
      if ( !v31 )
        goto LABEL_44;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v30[4], 0);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_44;
      v32 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, intptr_t))ReplaceChocoShaderFunc->fields.invoke_impl)(
                                      ReplaceChocoShaderFunc->fields.method_code,
                                      obj,
                                      v16,
                                      ReplaceChocoShaderFunc->fields.method);
      UnityEngine_Material__set_shader(v31, v32, 0);
      v33.fields.r = r;
      v33.fields.g = g;
      v33.fields.b = b;
      v33.fields.a = a;
      UnityEngine_Material__SetColor(v31, (System_String_o *)StringLiteral_16781/*"_Color"*/, v33, 0);
      v34.fields.r = v4;
      v34.fields.g = v10;
      v34.fields.b = v11;
      v34.fields.a = v12;
      UnityEngine_Material__SetColor(v31, (System_String_o *)StringLiteral_16726/*"_AddColor"*/, v34, 0);
      UnityEngine_Material__SetTexture(v31, (System_String_o *)StringLiteral_16763/*"_ChocoTex"*/, (UnityEngine_Texture_o *)object, 0);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_83064036(
                                          v31,
                                          (System_String_o *)StringLiteral_17022/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v31, (System_String_o *)StringLiteral_17022/*"_Use_alphawidth"*/, 1.0, 0);
      v27 = (int)v28[1].klass;
      if ( (int)++v29 >= v27 )
        goto LABEL_32;
    }
LABEL_45:
    sub_21FFED4(obj);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__changeColorMatrixShader(
        UnityEngine_GameObject_o *targetRoot,
        bool isColorMatrix,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Object_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x22
  __int64 v12; // x2
  UnityEngine_Object_o *monitor; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *p_obj; // x22
  int v17; // w9
  System_Object_array *ComponentsInChildren_object; // x21
  System_Collections_Generic_List_object__o *v19; // x23
  int max_length; // w8
  unsigned int v21; // w27
  Il2CppClass **v22; // x8
  Il2CppObject *v23; // x24
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_59377FE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_TryGetComponent_EffectMarkComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_BattleCharaColorMatrixComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleCharaColorMatrixComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____91557224);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59377FE = 1;
  }
  component = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isColorMatrix, data);
  v7 = (System_Object_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetRoot, 0, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( !targetRoot )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         targetRoot,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    v7 = (System_Object_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_42;
      monitor = (UnityEngine_Object_o *)Component_object[2].monitor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
      v7 = (System_Object_array *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        targetRoot = (UnityEngine_GameObject_o *)Component_object[2].monitor;
        if ( !targetRoot )
          goto LABEL_42;
      }
    }
    p_obj = UnityEngine_GameObject__GetComponent_object_(
              targetRoot,
              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaColorMatrixComponent___);
    v17 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( isColorMatrix )
    {
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      v7 = (System_Object_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)p_obj, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        v7 = (System_Object_array *)UnityEngine_GameObject__AddComponent_object_(
                                      targetRoot,
                                      (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_BattleCharaColorMatrixComponent___);
        p_obj = &v7->obj;
      }
      if ( !p_obj )
        goto LABEL_42;
      BattleCharaColorMatrixComponent__Initialize((BattleCharaColorMatrixComponent_o *)p_obj, 0);
      if ( !BattleCharaColorMatrixComponent__get_HasValidShader((BattleCharaColorMatrixComponent_o *)p_obj, 0) )
        return;
    }
    else
    {
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)p_obj, 0, 0) )
        return;
    }
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    targetRoot,
                                    1,
                                    (const MethodInfo_3884508 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____91557224);
    v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Renderer__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Renderer___ctor__);
    if ( !ComponentsInChildren_object )
      goto LABEL_42;
    max_length = ComponentsInChildren_object->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
          sub_21FFED4(v7);
        v22 = &ComponentsInChildren_object->obj.klass + (int)v21;
        v23 = (Il2CppObject *)v22[4];
        if ( !v23 )
          break;
        v7 = (System_Object_array *)UnityEngine_Component__TryGetComponent_object_(
                                      (UnityEngine_Component_o *)v22[4],
                                      &component,
                                      (const MethodInfo_37EE6DC *)Method_UnityEngine_Component_TryGetComponent_EffectMarkComponent___);
        if ( ((unsigned __int8)v7 & 1) == 0 )
        {
          if ( !v19 )
            break;
          items = v19->fields._items;
          v31 = Method_System_Collections_Generic_List_Renderer__Add__;
          ++v19->fields._version;
          if ( !items )
            break;
          size = v19->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              v23,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
        max_length = ComponentsInChildren_object->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_38;
      }
LABEL_42:
      sub_21FFECC(v7, v8);
    }
LABEL_38:
    if ( !v19 )
      goto LABEL_42;
    v7 = System_Collections_Generic_List_object___ToArray(
           v19,
           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_Renderer__ToArray__);
    if ( !p_obj )
      goto LABEL_42;
    BattleCharaColorMatrixComponent__Change(
      (BattleCharaColorMatrixComponent_o *)p_obj,
      (UnityEngine_Renderer_array *)v7,
      isColorMatrix,
      data,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x22
  __int64 v3; // x2
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v5; // x23
  unsigned __int64 v6; // x19
  UnityEngine_Object_o *v7; // x20
  float v8; // s13
  float v9; // s14
  float v10; // s15
  float b; // s10
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v14; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  UnityEngine_Transform_o *NodeFromName; // x21
  __int64 v19; // x2
  UnityEngine_GameObject_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x22
  unsigned __int64 v22; // x29
  UnityEngine_Object_o *v23; // x23
  int v24; // w8
  UnityEngine_GameObject_o *v25; // x24
  unsigned int v26; // w28
  UnityEngine_GameObject_c **v27; // x8
  UnityEngine_Material_o *v28; // x25
  UnityEngine_Shader_o *v29; // x0
  float x; // s8
  float y; // s9
  float v32; // s8
  float v33; // s9
  float32x4_t v34; // q2
  float v35; // s8
  float v36; // s9
  float32x4_t v37; // q0
  float32x4_t v38; // q2
  float32x4_t v39; // q0
  float v40; // s8
  UnityEngine_GameObject_o *v41; // [xsp+10h] [xbp-110h]
  float a; // [xsp+18h] [xbp-108h]
  float value; // [xsp+1Ch] [xbp-104h]
  float32x4_t v44; // [xsp+20h] [xbp-100h]
  float32x4_t v45; // [xsp+30h] [xbp-F0h]
  float32x4_t v46; // [xsp+40h] [xbp-E0h]
  UnityEngine_Bounds_o v47; // [xsp+50h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v48; // [xsp+68h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_59377FA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16777/*"_ClipSharpnessY"*/);
    sub_21FFC50(&StringLiteral_5089/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/);
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    sub_21FFC50(&StringLiteral_22102/*"joint_all_Base"*/);
    sub_21FFC50(&StringLiteral_26115/*"weapon"*/);
    sub_21FFC50(&StringLiteral_17022/*"_Use_alphawidth"*/);
    sub_21FFC50(&StringLiteral_18029/*"body"*/);
    obj = (UnityEngine_GameObject_o *)sub_21FFC50(&StringLiteral_16726/*"_AddColor"*/);
    byte_59377FA = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                      v2,
                                      (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v5 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v8 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    goto LABEL_13;
  }
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)klass )
      goto LABEL_54;
    v7 = (UnityEngine_Object_o *)*((_QWORD *)&v5[1].monitor + v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v5[1].klass;
    if ( (__int64)++v6 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v7 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v7, 0);
  if ( !obj )
    goto LABEL_53;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  value = 1.0;
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16781/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v7, 0);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16781/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    value = Color.fields.a;
    b = Color.fields.b;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v7, 0);
  if ( !obj )
LABEL_53:
    sub_21FFECC(obj, method);
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16726/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v7, 0);
    if ( obj )
    {
      v55 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16726/*"_AddColor"*/, 0);
      v10 = v55.fields.r;
      v9 = v55.fields.g;
      a = v55.fields.a;
      v8 = v55.fields.b;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
LABEL_13:
  v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5089/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0);
  transform = UnityEngine_GameObject__get_transform(v2, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_22102/*"joint_all_Base"*/, 0, 0);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v16, v17);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v16);
  v20 = v5[1].klass;
  if ( (int)v20 >= 1 )
  {
    v21 = obj;
    v22 = 0;
    v41 = v5;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
        goto LABEL_54;
      v23 = (UnityEngine_Object_o *)*((_QWORD *)&v5[1].monitor + v22);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v19);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v23, 0, 0);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v23, 0);
        if ( !obj )
          goto LABEL_53;
        v24 = (int)obj[1].klass;
        v25 = obj;
        if ( v24 >= 1 )
          break;
      }
LABEL_41:
      v5 = v41;
      ++v22;
      LODWORD(v20) = v41[1].klass;
      if ( (__int64)v22 >= (int)v20 )
        return;
    }
    v26 = 0;
    while ( v26 < v24 )
    {
      v27 = &v25->klass + (int)v26;
      v28 = (UnityEngine_Material_o *)v27[4];
      if ( !v28 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v27[4], 0);
      if ( !v21 )
        goto LABEL_53;
      v29 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, intptr_t))v21[1].klass)(
                                      v21[2].fields.m_CachedPtr,
                                      obj,
                                      v14,
                                      v21[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v28, v29, 0);
      v52.fields.r = r;
      v52.fields.g = g;
      v52.fields.b = b;
      v52.fields.a = value;
      UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16781/*"_Color"*/, v52, 0);
      v53.fields.r = v10;
      v53.fields.g = v9;
      v53.fields.b = v8;
      v53.fields.a = a;
      UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16726/*"_AddColor"*/, v53, 0);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_18029/*"body"*/, 0) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_26115/*"weapon"*/, 0) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v23,
                                            0);
        if ( !obj )
          goto LABEL_53;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0);
        if ( !NodeFromName )
          goto LABEL_53;
        v50 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, position, 0);
        x = v50.fields.x;
        y = v50.fields.y;
        v45 = *(float32x4_t *)&v50.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0);
        v32 = x - localPosition.fields.x;
        v33 = y - localPosition.fields.y;
        v46 = *(float32x4_t *)&localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v48, (UnityEngine_Renderer_o *)v23, 0);
        v34.n128_u64[1] = 0x3F0000003F000000LL;
        v34.n128_u64[0] = LODWORD(v48.fields.m_Center.fields.z) | 0x3F00000000000000LL;
        v35 = v32 + v48.fields.m_Center.fields.x;
        v36 = v33 + v48.fields.m_Center.fields.y;
        v44 = v34;
        UnityEngine_Renderer__get_localBounds(&v48, (UnityEngine_Renderer_o *)v23, 0);
        v37.n128_u64[0] = __PAIR64__(LODWORD(v48.fields.m_Extents.fields.x), v45.n128_u32[0]);
        v47.fields.m_Center.fields.x = v35;
        v47.fields.m_Center.fields.y = v36;
        v37.n128_u64[1] = *(_QWORD *)&v48.fields.m_Extents.fields.y;
        v38.n128_u64[0] = 0x3F0000003F000000LL;
        v38.n128_u64[1] = 0x3F0000003F000000LL;
        v39 = vmulq_f32(vaddq_f32(v37, v37), v38);
        v39.n128_u32[0] = vaddq_f32(vsubq_f32(v45, v46), v44).n128_u32[0];
        *(float32x4_t *)&v47.fields.m_Center.fields.z = v39;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v23, &v47, 0);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v23, NodeFromName, 0);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v48, (UnityEngine_Renderer_o *)v23, 0);
        v40 = v48.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v48, (UnityEngine_Renderer_o *)v23, 0);
        UnityEngine_Material__SetFloat(
          v28,
          (System_String_o *)StringLiteral_16777/*"_ClipSharpnessY"*/,
          v40 - v48.fields.m_Extents.fields.y,
          0);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_83064036(
                                          v28,
                                          (System_String_o *)StringLiteral_17022/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v28, (System_String_o *)StringLiteral_17022/*"_Use_alphawidth"*/, 1.0, 0);
      v24 = (int)v25[1].klass;
      if ( (int)++v26 >= v24 )
        goto LABEL_41;
    }
LABEL_54:
    sub_21FFED4(obj);
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

  if ( (byte_5937827 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937827 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v12);
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_String_o *v27; // x19
  int32_t v30; // [xsp+8h] [xbp-58h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5937828 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9898/*"NoblePhantasm_"*/);
    sub_21FFC50(&StringLiteral_26393/*"{0:D0}_{1}"*/);
    sub_21FFC50(&StringLiteral_13274/*"Servants_"*/);
    byte_5937828 = 1;
  }
  v31 = 0;
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v14);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v18 = overwriteSvtVoiceId;
  else
    v18 = VoiceId;
  v30 = VoicePrefix;
  v31 = v18;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v30);
  v20 = System_String__Format_75484576((System_String_o *)StringLiteral_26393/*"{0:D0}_{1}"*/, v19, (Il2CppObject *)voiceTypeId, 0);
  if ( SvtEntity )
  {
    v21 = &StringLiteral_9898/*"NoblePhantasm_"*/;
    v22 = v20;
    if ( !isNp )
      v21 = &StringLiteral_13274/*"Servants_"*/;
    v23 = (System_String_o *)*v21;
    v24 = System_Int32__ToString((int32_t)&v31, 0);
    v27 = System_String__Concat_75438412(v23, v24, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v25, v26);
    return SoundManager__checkServantVoice(v27, v22, 0, 0);
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

  if ( (byte_59377D0 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return ServantAssetLoadManager__checkLoadlocal((ServantAssetLoadManager_o *)Instance, v2);
}


bool ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_59377D1 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_59377D1 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_21FFECC(this, method);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v2->fields.soundCount > 0;
}


void ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  MissionNaviTransitionBoardItem_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  Il2CppObject *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_59377BA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59377BA = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = (struct ServantMaster_o *)MasterData_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.svtmaster,
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v12 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = (struct ServantLimitMaster_o *)v12;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.svtlimitmaster,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (MissionNaviTransitionBoardItem_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_21FFECC(Instance, v4);
  v21 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (MissionNaviTransitionBoardItem_c *)v21;
  sub_21FFBF4(p_svtlimitaddmaster, (int32_t)v21, v22, v23, v24, v25, v26, v27);
}


void ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_59377CE & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
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
  if ( (byte_59377CF & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    byte_59377CF = 1;
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
    sub_21FFECC(this, method);
  v10 = loadedList->fields._size;
  v11 = loadedList->fields._version + 1;
  loadedList->fields._size = 0;
  loadedList->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)loadedList->fields._items, 0, v10, 0);
  v2->fields.soundCount = 0;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937833 & 1) == 0 )
  {
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_21FFC50(&StringLiteral_19736/*"effect/ef_shadow0"*/);
    byte_5937833 = 1;
  }
  v18 = 0;
  if ( effectId >= 1 )
  {
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&tp, *(_QWORD *)&effectId);
    EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(effectId, 0, 1, 1.0, 0);
    if ( EffectObjectSafe )
    {
      v9 = EffectObjectSafe;
      UnityEngine_GameObject__SetActive(EffectObjectSafe, 1, 0);
      return v9;
    }
LABEL_22:
    sub_21FFECC(EffectObjectSafe, v8);
  }
  v18 = tp + 1;
  v10 = System_Int32__ToString((int32_t)&v18, 0);
  EffectObjectSafe = (UnityEngine_GameObject_o *)System_String__Concat_75438412(
                                                   (System_String_o *)StringLiteral_19736/*"effect/ef_shadow0"*/,
                                                   v10,
                                                   0);
  if ( !this->fields._releaseAssets )
    goto LABEL_22;
  v11 = (Il2CppObject *)EffectObjectSafe;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this->fields._releaseAssets,
         (Il2CppObject *)EffectObjectSafe,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)this->fields._releaseAssets;
    if ( !EffectObjectSafe )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)EffectObjectSafe,
             v11,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    if ( Item )
    {
      if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
        v15 = Item;
      else
        v15 = 0;
    }
    else
    {
      v15 = 0;
    }
  }
  else
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_object_(
                                                     (System_String_o *)v11,
                                                     (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( !releaseAssets )
      goto LABEL_22;
    v15 = (Il2CppObject *)EffectObjectSafe;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
      v11,
      (Il2CppObject *)EffectObjectSafe,
      (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       v15,
                                       (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void ServantAssetLoadManager__endloadList(ServantAssetLoadManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  Il2CppObject *name; // x20

  if ( (byte_59377D5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    byte_59377D5 = 1;
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
           (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)loadlist,
        name,
        (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_21FFECC(loadlist, data);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadlist,
          name,
          (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
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

  if ( (byte_59377EA & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13267/*"Servants/"*/);
    byte_59377EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  BattleChrId = ServantAssetLoadManager__getBattleChrId((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v7);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_13267/*"Servants/"*/, BattleChrId, 0);
}


System_String_o *ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_59377E9 & 1) == 0 )
  {
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13267/*"Servants/"*/);
    byte_59377E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v5, v6);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0);
  if ( !Instance )
    sub_21FFECC(LimitCountByImageLimitCostumeIn, v9);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(
                  (ServantAssetLoadManager_o *)Instance,
                  svtId,
                  LimitCountByImageLimitCostumeIn,
                  v10);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_13267/*"Servants/"*/, BattleChrId, 0);
}


System_String_o *ServantAssetLoadManager__getActorFolderName_47621976(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59377EB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13267/*"Servants/"*/);
    byte_59377EB = 1;
  }
  v5 = svtId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v5);
  return System_String__Concat((Il2CppObject *)StringLiteral_13267/*"Servants/"*/, v3, 0);
}


Il2CppObject *ServantAssetLoadManager__getAssetObject_object_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_3952574 *method)
{
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path);
  result = (Il2CppObject *)AssetManager__getAssetStorage(path, 0);
  if ( result )
    return AssetData__GetObject_object__58323140(
             (AssetData_o *)result,
             file,
             (const MethodInfo_379F0C4 *)method->rgctx_data->_1_AssetData_GetObject_T_);
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
    sub_21FFECC(0, v7);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0);
}


System_String_o *ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = cameraId;
  if ( (byte_5937836 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13268/*"Servants/Camera/"*/);
    byte_5937836 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_13268/*"Servants/Camera/"*/, v2, 0);
}


System_String_o *ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59377BD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13270/*"Servants/Commands/"*/);
    byte_59377BD = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_13270/*"Servants/Commands/"*/, v4, 0);
}


System_String_o *ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59377BC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13270/*"Servants/Commands/"*/);
    byte_59377BC = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_13270/*"Servants/Commands/"*/, v4, 0);
}


System_String_o *ServantAssetLoadManager__getNameEffectPath(int32_t enemyNameEffectId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_5937849 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6089/*"Effect/BattleCommon/NameEffect/"*/);
    byte_5937849 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_6089/*"Effect/BattleCommon/NameEffect/"*/, v2, 0);
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

  if ( (byte_5937817 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6113/*"Effect/CutIn/Skill/{0}"*/);
    byte_5937817 = 1;
  }
  v6 = cutInId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6113/*"Effect/CutIn/Skill/{0}"*/, v4, 0);
}


System_String_o *ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59377C5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13273/*"Servants/Status/"*/);
    byte_59377C5 = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_13273/*"Servants/Status/"*/, v4, 0);
}


System_String_o *ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59377C4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13273/*"Servants/Status/"*/);
    byte_59377C4 = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_13273/*"Servants/Status/"*/, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtmaster; // x0

  if ( (byte_59377BB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_59377BB = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtmaster;
  if ( !svtmaster )
    sub_21FFECC(0, v5);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              svtmaster,
                              svtId,
                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_21FFECC(0, v7);
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
    sub_21FFECC(0, v7);
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
    sub_21FFECC(SvtVoiceId, v8);
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
    sub_21FFECC(SvtVoiceId, v8);
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

  if ( (byte_5937805 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937805 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v9);
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

  if ( (byte_5937806 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_21FFC50(&StringLiteral_13267/*"Servants/"*/);
    byte_5937806 = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v11 = System_String__Concat_75438412((System_String_o *)StringLiteral_13267/*"Servants/"*/, BattleChrId, 0);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v11,
                                       name,
                                       (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
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

  if ( (byte_593781C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593781C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *AssetObject_object; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x20
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Transform_o *v18; // x20
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  v20 = weapongroup;
  if ( (byte_593781D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_21FFC50(&StringLiteral_22712/*"motion"*/);
    sub_21FFC50(&StringLiteral_13271/*"Servants/Motion/"*/);
    byte_593781D = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v20, 0);
  v8 = System_String__Concat_75438412((System_String_o *)StringLiteral_13271/*"Servants/Motion/"*/, v7, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         v8,
                         (System_String_o *)StringLiteral_22712/*"motion"*/,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_18;
  v14 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !parent )
    goto LABEL_18;
  v15 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
  v16 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5931940 )
  {
    transform = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
  v17 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5931948 )
  {
    transform = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931948 = 1;
  }
  if ( !v17 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(v17, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
  v18 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5931945 )
  {
    transform = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v18 )
LABEL_18:
    sub_21FFECC(transform, v13);
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v14;
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

  if ( (byte_5937801 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937801 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  int v9; // w8
  System_String_o *ActorFolderName_47621976; // x0

  if ( (byte_5937802 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20271/*"fbxevent"*/);
    byte_5937802 = 1;
  }
  v9 = *(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1);
  if ( isForce )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName_47621976(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  if ( !this )
    sub_21FFECC(ActorFolderName_47621976, ActorFolderName_47621976);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_object_(
                                      this,
                                      ActorFolderName_47621976,
                                      (System_String_o *)StringLiteral_20271/*"fbxevent"*/,
                                      (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
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

  if ( (byte_59377F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v12);
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
  int v13; // w8
  System_String_o *ActorFolderName_47621976; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *AssetObject_object; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_Transform_o *v27; // x22
  UnityEngine_Transform_o *v28; // x19
  UnityEngine_Transform_o *v29; // x19

  if ( (byte_59377F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18716/*"chr"*/);
    byte_59377F2 = 1;
  }
  v13 = *(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1);
  if ( isForce )
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, assetPath, parent);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName_47621976(
                                 svtId,
                                 (const MethodInfo *)assetPath);
  }
  else
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, assetPath, parent);
    ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  }
  *assetPath = ActorFolderName_47621976;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)assetPath,
    (int32_t)ActorFolderName_47621976,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         *assetPath,
                         (System_String_o *)StringLiteral_18716/*"chr"*/,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_23;
  v26 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !parent )
    goto LABEL_23;
  v27 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v27 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v26, 0);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v26, 0);
  v28 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5931948 )
  {
    transform = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931948 = 1;
  }
  if ( !v28 )
    goto LABEL_23;
  UnityEngine_Transform__set_eulerAngles(v28, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v26, 0);
  v29 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5931945 )
  {
    transform = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v29 )
LABEL_23:
    sub_21FFECC(transform, v25);
  UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v26;
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5937813 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937813 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal((ServantAssetLoadManager_o *)Instance, path, name, v7);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Object_object__58323140; // x19

  if ( (byte_5937814 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937814 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path, name);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                AssetStorage,
                                name,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  else
    Object_object__58323140 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    return (UnityEngine_GameObject_o *)Object_object__58323140;
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

  if ( (byte_5937838 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937838 = 1;
  }
  if ( !cameraId )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *AssetObject_object; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *v17; // x19
  UnityEngine_Transform_o *v18; // x19

  if ( (byte_5937839 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18447/*"cameraAction"*/);
    byte_5937839 = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId, parent);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CameraActionPath,
                         (System_String_o *)StringLiteral_18447/*"cameraAction"*/,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  v13 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              AssetObject_object,
                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !parent )
      goto LABEL_22;
    v16 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0);
    if ( !v16 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0);
    v17 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5931948 )
    {
      transform = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931948 = 1;
    }
    if ( !v17 )
      goto LABEL_22;
    UnityEngine_Transform__set_eulerAngles(v17, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0);
    v18 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5931945 )
    {
      transform = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( !v18 )
LABEL_22:
      sub_21FFECC(transform, v15);
    UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  return v13;
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

  if ( (byte_59377C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v9);
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
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  System_String_o *CommandCardLoadFolderName; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *AssetObject_object; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  bool v23; // w8
  UITexture_o *result; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59377C1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18528/*"card_servant_"*/);
    byte_59377C1 = 1;
  }
  LimitImageIndex = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v10, v11);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v12);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v13, v14);
  v16 = System_Int32__ToString((int32_t)&LimitImageIndex, 0);
  v17 = System_String__Concat_75438412((System_String_o *)StringLiteral_18528/*"card_servant_"*/, v16, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCardLoadFolderName,
                         v17,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  v23 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0, 0);
  result = 0;
  if ( !v23 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    v25 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
    if ( v25 )
    {
      if ( !tex )
        sub_21FFECC(v25, v26);
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

  if ( (byte_593783C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593783C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_47643376(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           userCommandCodeId,
           v7);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *CommandCodeFolderName; // x22
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *AssetObject_object; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  bool v15; // w8
  UITexture_o *result; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593783E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18427/*"c_{0:D7}"*/);
    byte_593783E = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, tex, *(_QWORD *)&commandCodeId);
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v19 = commandCodeId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v19);
  v9 = System_String__Format((System_String_o *)StringLiteral_18427/*"c_{0:D7}"*/, v8, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCodeFolderName,
                         v9,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0, 0);
  result = 0;
  if ( !v15 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
    if ( v17 )
    {
      if ( !tex )
        sub_21FFECC(v17, v18);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
        tex,
        AssetObject_object,
        tex->klass->vtable._27_set_mainTexture.method);
    }
    return tex;
  }
  return result;
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTextureLocal_47643376(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int32_t v12; // w0
  const MethodInfo *v13; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_593783F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593783F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0;
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userCommandCodeId,
                               (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_21FFECC(Instance, v8);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
  *(_QWORD *)&v16.fields.currentCryptoKey = klass;
  *(_QWORD *)&v16.fields.fakeValue = monitor;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v12, v13);
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTexture_47643648(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_593783D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593783D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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

  if ( (byte_5937809 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937809 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  return ServantAssetLoadManager__loadCommonEffectlocal((ServantAssetLoadManager_o *)Instance, name, v5);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  UnityEngine_Object_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_593780A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_19703/*"effect/"*/);
    byte_593780A = 1;
  }
  v4 = System_String__Concat_75438412((System_String_o *)StringLiteral_19703/*"effect/"*/, name, 0);
  v5 = UnityEngine_Resources__Load(v4, 0);
  if ( v5 )
  {
    if ( (UnityEngine_GameObject_c *)v5->klass == UnityEngine_GameObject_TypeInfo )
      v8 = v5;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Inequality(v8, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)v8,
                                       (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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

  if ( (byte_5937807 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937807 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *Manager__loadCommonEffectlocal; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x4

  if ( (byte_5937808 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937808 = 1;
  }
  Manager__loadCommonEffectlocal = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommonEffectlocal(
                                                             this,
                                                             name,
                                                             *(const MethodInfo **)&weapongroup);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  v11 = UnityEngine_Object__op_Equality(Manager__loadCommonEffectlocal, 0, 0);
  if ( v11 )
    return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
             (ServantAssetLoadManager_o *)v11,
             name,
             weapongroup,
             effectFolder,
             v12);
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

  return StandFigureManager__CreateRenderPrefab_47607168(
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

  if ( (byte_59377CC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v10);
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
  const MethodInfo *v16; // x2
  long double v17; // q0
  System_String_o *v18; // x21
  System_String_o *OverwriteTDFileName; // x0
  Il2CppObject *AssetObject_object; // x20
  int imageIndex; // w22
  __int64 v22; // x0
  System_String_o *v23; // x24
  __int64 v24; // x0
  System_String_o *NpNameFileSuffix; // x22
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  System_String_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x2
  ServantAssetLoadManager_o *v32; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  bool v36; // w21
  int v37; // s0 OVERLAPPED
  float v38; // s1
  float v39; // s2
  float v40; // s3
  unsigned int v42; // [xsp+Ch] [xbp-54h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59377CD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    sub_21FFC50(&StringLiteral_18529/*"card_servant_np"*/);
    byte_59377CD = 1;
  }
  entity = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  v14 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          svtId,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  entity = 0;
  if ( !v14 )
    goto LABEL_46;
  v15 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)v14, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_16;
  if ( !v15 )
    goto LABEL_46;
  if ( !ServantLimitAddMaster__TryGetEntity(v15, &entity, svtId, limit, 0) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_46;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0) )
  {
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v13, v16);
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v13, v16);
    if ( !entity )
      goto LABEL_46;
    v18 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(entity, 0);
    AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                           this,
                           v18,
                           OverwriteTDFileName,
                           (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_16:
    if ( EntityFromIDID )
    {
      v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      v23 = (System_String_o *)StringLiteral_18529/*"card_servant_np"*/;
      if ( (*(_WORD *)(v22 + 309) & 1) == 0 )
        v22 = sub_2237AF8(v17);
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
      if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
        v24 = sub_2237AF8(v17);
      Instance = **(DataManager_o ***)(v24 + 184);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_3EDD388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_46;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0) )
        v23 = System_String__Concat_75481624(v23, (System_String_o *)StringLiteral_16714/*"_"*/, NpNameFileSuffix, 0);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v26, v27);
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v27);
        v32 = this;
        v31 = v23;
      }
      else
      {
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v26, v27);
        v28 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v27);
        v42 = (unsigned int)imageIndex >> 1;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v42);
        v30 = System_String__Format((System_String_o *)StringLiteral_26433/*"{0}"*/, v29, 0);
        v31 = System_String__Concat_75438412(v23, v30, 0);
        v32 = this;
        CommandCardLoadFolderName = v28;
      }
      AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                             v32,
                             CommandCardLoadFolderName,
                             v31,
                             (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    }
    else
    {
      LOBYTE(imageIndex) = 0;
      AssetObject_object = 0;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v16);
  v36 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0, 0);
  if ( !v36 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( tex )
      {
        ((void (__fastcall *)(UITexture_o *, Il2CppObject *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
          tex,
          AssetObject_object,
          tex->klass->vtable._27_set_mainTexture.method);
        v37 = 0;
        v38 = 0.5;
        v39 = 1.0;
        v40 = 0.5;
        if ( (imageIndex & 1) != 0 )
          v38 = 0.0;
        UITexture__set_uvRect(tex, *(UnityEngine_Rect_o *)&v37, 0);
        return !v36;
      }
LABEL_46:
      sub_21FFECC(Instance, v13);
    }
  }
  return !v36;
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
  UnityEngine_MonoBehaviour__StartCoroutine_83231452(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_593782F & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_TypeInfo);
    byte_593782F = 1;
  }
  v15 = sub_21FFEBC(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 40) = parent;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 40), (int32_t)parent, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v15 + 48) = svtId;
  *(_DWORD *)(v15 + 64) = treasureDvcId;
  *(_DWORD *)(v15 + 68) = treasureDvcLv;
  *(_QWORD *)(v15 + 72) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 72), (int32_t)callback, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_5937818 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937818 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  ServantAssetLoadManager__loadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, callback, v7);
}


void ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *SkillCutInPath; // x20

  if ( (byte_5937819 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&AssetManager_TypeInfo);
    byte_5937819 = 1;
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
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__loadAssetStorage(SkillCutInPath, callback, 1, 0, 0);
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

  if ( (byte_59377C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  System_String_o *StatusImageFolderName; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *AssetObject_object; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  bool v22; // w8
  UITexture_o *result; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59377C9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24908/*"status_servant_"*/);
    byte_59377C9 = 1;
  }
  LimitImageIndex = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9, v10);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v11);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v12, v13);
  v15 = System_Int32__ToString((int32_t)&LimitImageIndex, 0);
  v16 = System_String__Concat_75438412((System_String_o *)StringLiteral_24908/*"status_servant_"*/, v15, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         StatusImageFolderName,
                         v16,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  v22 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0, 0);
  result = 0;
  if ( !v22 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
    if ( v24 )
    {
      if ( !tex )
        sub_21FFECC(v24, v25);
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

  if ( (byte_593780D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593780D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  AssetData_o *AssetStorage; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Object_object__58323140; // x19
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = weapongroup;
  v17 = effectFolder;
  if ( (byte_593780E & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6146/*"Effect/weapon/"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593780E = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v18, 0);
  v10 = System_String__Concat_75438412((System_String_o *)StringLiteral_6146/*"Effect/weapon/"*/, v7, 0);
  if ( effectFolder )
  {
    v11 = System_Int32__ToString((int32_t)&v17, 0);
    v10 = System_String__Concat_75481624(v10, (System_String_o *)StringLiteral_1123/*"/"*/, v11, 0);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8, v9);
  AssetStorage = AssetManager__getAssetStorage(v10, 0);
  if ( AssetStorage )
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                AssetStorage,
                                name,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  else
    Object_object__58323140 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    return (UnityEngine_GameObject_o *)Object_object__58323140;
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

  if ( (byte_593782C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    byte_593782C = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         ActorVoice,
         uniqueId,
         (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             ActorVoice,
                                                                             uniqueId,
                                                                             (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0);
        return;
      }
    }
LABEL_9:
    sub_21FFECC(ActorVoice, *(_QWORD *)&uniqueId);
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

  if ( (byte_5937820 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937820 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v18);
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

  if ( (byte_5937823 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937823 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v12);
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
  char v17; // w9
  System_Reflection_MethodBase_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5937824 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    sub_21FFC50(&StringLiteral_13267/*"Servants/"*/);
    byte_5937824 = 1;
  }
  v21 = 0;
  result = (SePlayer_o *)ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  if ( result )
  {
    VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v14);
    v16 = Method_ServantAssetLoadManager_playBattleVoiceSelocal__;
    if ( overwriteSvtVoiceId )
      VoiceId = overwriteSvtVoiceId;
    v17 = *((_BYTE *)Method_ServantAssetLoadManager_playBattleVoiceSelocal__ + 83);
    v21 = VoiceId;
    if ( (v17 & 2) != 0 )
      v16 = (_QWORD *)sub_21FFC68(Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    v18 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
    v19 = System_Int32__ToString((int32_t)&v21, 0);
    v20 = System_String__Concat_75438412((System_String_o *)StringLiteral_13267/*"Servants/"*/, v19, 0);
    return OverwriteAssetSoundName__PlaySe_48366604(v18, v20, targetFileName, volume, 0, 0, 0);
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
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x28
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
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
  __int64 v48; // x1
  __int64 v49; // x2
  Il2CppObject *v51; // x0
  int32_t v52; // [xsp+8h] [xbp-68h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5937821 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager___c__DisplayClass143_0__playBattleVoicelocal_b__0__);
    sub_21FFC50(&ServantAssetLoadManager___c__DisplayClass143_0_TypeInfo);
    sub_21FFC50(&StringLiteral_26393/*"{0:D0}_{1}"*/);
    sub_21FFC50(&StringLiteral_13267/*"Servants/"*/);
    sub_21FFC50(&StringLiteral_9894/*"NoblePhantasm/"*/);
    byte_5937821 = 1;
  }
  VoiceId = 0;
  v20 = sub_21FFEBC(ServantAssetLoadManager___c__DisplayClass143_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 16), (int32_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = callback;
  v29 = v20 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 24), (int32_t)callback, v30, v31, v32, v33, v34, v35);
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
               (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__object___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   ActorVoice,
                                                                                   uniqueId,
                                                                                   (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
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
          (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v41 = (System_String_o **)(isNp ? &StringLiteral_9894/*"NoblePhantasm/"*/ : &StringLiteral_13267/*"Servants/"*/);
        v42 = *v41;
        v43 = System_Int32__ToString((int32_t)&VoiceId, 0);
        v44 = System_String__Concat_75438412(v42, v43, 0);
        v45 = this->fields.ActorVoice;
        v46 = v44;
        v47 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v47,
          (Il2CppObject *)v20,
          Method_ServantAssetLoadManager___c__DisplayClass143_0__playBattleVoicelocal_b__0__,
          0);
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v48, v49);
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)SoundManager__playVoice_48465348(
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
            (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_21FFECC(ActorVoice, v22);
    }
  }
  else
  {
    v52 = VoicePrefix;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v52);
    targetFileName = System_String__Format_75484576(
                       (System_String_o *)StringLiteral_26393/*"{0:D0}_{1}"*/,
                       v51,
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
  if ( (byte_593781B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13271/*"Servants/Motion/"*/);
    byte_593781B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_String__Concat_75438412((System_String_o *)StringLiteral_13271/*"Servants/Motion/"*/, v5, 0);
  if ( !Instance )
    sub_21FFECC(v6, v7);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v6, dlOnly, 0, v8);
}


void ServantAssetLoadManager__preloadBattleActor(ServantAssetArgs_o *args, bool isForce, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x6

  if ( (byte_59377EC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_21FFECC(Instance, v6);
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
  int v13; // w8
  int32_t v14; // w0
  System_String_o *ActorFolderName_47621976; // x0
  const MethodInfo *v16; // x4
  int32_t v17; // w0

  if ( (byte_59377ED & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377ED = 1;
  }
  v13 = *(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1);
  if ( appearanceId < 1 )
  {
    if ( isForce )
    {
      if ( !v13 )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
      v14 = svtId;
      goto LABEL_12;
    }
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    v17 = svtId;
  }
  else
  {
    if ( isForce )
    {
      if ( !v13 )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
      v14 = appearanceId;
LABEL_12:
      ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName_47621976(v14, *(const MethodInfo **)&svtId);
      goto LABEL_20;
    }
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    v17 = appearanceId;
  }
  ActorFolderName_47621976 = ServantAssetLoadManager__getActorFolderName(
                               v17,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_20:
  if ( !this )
    sub_21FFECC(ActorFolderName_47621976, ActorFolderName_47621976);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_47621976, dlOnly, 0, v16);
}


System_String_array *ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5937811 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937811 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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

  if ( (byte_5937812 & 1) == 0 )
  {
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    byte_5937812 = 1;
  }
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, effectIdList, method);
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0);
  if ( !BattleCommonEffectPathList )
    sub_21FFECC(0, v6);
  max_length = BattleCommonEffectPathList->max_length;
  v9 = BattleCommonEffectPathList;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_21FFED4(BattleCommonEffectPathList);
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
  __int64 v6; // x2
  Il2CppObject *Instance; // x21
  System_String_o *CameraActionPath; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_5937837 & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937837 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v5, v6);
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v5);
    if ( !Instance )
      sub_21FFECC(CameraActionPath, v9);
    ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, CameraActionPath, dlOnly, 0, v10);
  }
}


void ServantAssetLoadManager__preloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_59377BE & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
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
  System_String_o *CommandCardLoadFolderName; // x1
  const MethodInfo *v9; // x3

  if ( (byte_59377BF & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377BF = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(
                                svtId,
                                svtId,
                                *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, CommandCardLoadFolderName, dlOnly, v9);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__preloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  int32_t v9; // w22
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v11; // x3

  v6 = this;
  if ( (byte_5937840 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_5937840 = 1;
  }
  if ( commandCodeIds )
  {
    max_length = commandCodeIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_21FFED4(this);
        v9 = commandCodeIds->m_Items[v8];
        if ( v9 >= 1 )
        {
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, commandCodeIds, dlOnly);
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v9,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__tryLoadList(v6, CommandCodeFolderName, dlOnly, v11);
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

  if ( (byte_59377E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
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
  const MethodInfo_476E8C0 *v9; // x0
  SoundManager_o *v10; // x21
  System_String_o *VoiceAssetName; // x22
  System_Action_o *v12; // x23

  if ( (byte_59377E6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
    sub_21FFC50(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_59377E6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___getEntitys(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      (const MethodInfo_3EDC704 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__)) == 0 )
  {
LABEL_21:
    sub_21FFECC(Instance, v4);
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
        sub_21FFED4(Instance);
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
            v9 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__;
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v9);
            if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
              goto LABEL_20;
            v10 = (SoundManager_o *)Instance;
            Instance = *(DataManager_o **)&p_DispLog[8 * v7];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
            v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v12,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0);
            if ( !v10 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v10, VoiceAssetName, v12, 1, 0);
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
  __int64 v11; // x2
  int32_t v12; // w22
  System_String_o *NameEffectPath; // x22
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  int32_t StatusUiType; // w0
  int32_t v18; // w20
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  const MethodInfo *v22; // x4

  if ( (byte_5937847 & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937847 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0);
    if ( EnemyNameEffect )
    {
      v12 = EnemyNameEffect;
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v10, v11);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v12, v10);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      ServantAssetLoadManager__setLoadList(Instance, NameEffectPath, dlOnly, 0, v16);
    }
    if ( originalDeckSvt )
    {
      if ( !isShiftOrTransform )
      {
        StatusUiType = BattleDeckServantData__GetStatusUiType(originalDeckSvt, 0);
        if ( StatusUiType >= 1 )
        {
          v18 = StatusUiType;
          v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v19, v20);
          Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager__GetStatusUiPath(v18, v19);
          if ( v21 )
          {
            ServantAssetLoadManager__setLoadList(
              (ServantAssetLoadManager_o *)v21,
              (System_String_o *)Instance,
              dlOnly,
              1,
              v22);
            return;
          }
LABEL_17:
          sub_21FFECC(Instance, v15);
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

  if ( (byte_59377DA & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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

  if ( (byte_59377DD & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  const MethodInfo_476E8C0 *v13; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x22
  System_Action_o *v17; // x0
  System_Action_o *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59377DE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__);
    sub_21FFC50(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13274/*"Servants_"*/);
    byte_59377DE = 1;
  }
  v21 = 0;
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v12 = overwriteSvtVoiceId;
  else
    v12 = VoiceId;
  v21 = v12;
  if ( v12 )
  {
    v13 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__;
    ++this->fields.soundCount;
    Instance = SingletonMonoBehaviour_object___get_Instance(v13);
    v15 = System_Int32__ToString((int32_t)&v21, 0);
    v16 = System_String__Concat_75438412((System_String_o *)StringLiteral_13274/*"Servants_"*/, v15, 0);
    v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v18 = v17;
    if ( dlOnly )
    {
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, v16, v18, 1, 0);
        return;
      }
LABEL_13:
      sub_21FFECC(v19, v20);
    }
    System_Action___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v16, v18, 1, 0);
  }
}


void ServantAssetLoadManager__preloadServantlocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  int32_t v8; // w2
  const MethodInfo *v9; // x4
  int32_t v10; // w2
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  if ( !args )
    sub_21FFECC(this, 0);
  ServantAssetLoadManager__preloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._LoadActorLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    0,
    dlOnly,
    v4);
  ServantAssetLoadManager__preloadCommandCardlocal(
    this,
    args->fields._CommandImageSvtId_k__BackingField,
    v8,
    dlOnly,
    v9);
  ServantAssetLoadManager__preloadStatusFacelocal(this, args->fields._DispImageSvtId_k__BackingField, v10, dlOnly, v11);
  ServantAssetLoadManager__preloadServantVoicelocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._OverwriteSvtVoiceId_k__BackingField,
    dlOnly,
    v12);
  ServantAssetLoadManager__preloadCommandCodeTextureLocal(
    this,
    args->fields._CommandCodeIds_k__BackingField,
    dlOnly,
    v13);
  ServantAssetLoadManager__PreloadShadowEffectLocal(this, args, dlOnly, v14);
}


void ServantAssetLoadManager__preloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_59377E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v20; // x21
  System_Action_o *v21; // x22

  if ( (byte_59377E2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__);
    sub_21FFC50(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_59377E2 = 1;
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
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8(v8);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_2237AF8(v8);
    v11 = **(DataManager_o ***)(v10 + 184);
    if ( v11 )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            v11,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0);
          if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v17, v18);
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v16, 1, 0);
          return;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v20 = SkillLvEntity__getVoiceAssetName(v14, 0);
        v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v21,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v20, v21, 1, 0);
          return;
        }
      }
    }
    sub_21FFECC(v11, v7);
  }
}


void ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_59377C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
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
  System_String_o *StatusImageFolderName; // x1
  const MethodInfo *v9; // x3

  if ( (byte_59377C7 & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377C7 = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x21
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x21
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  System_String_o *v44; // x20
  const MethodInfo *v45; // x4
  Il2CppObject *v46; // x20
  Il2CppObject *v47; // x21
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  System_String_o *v51; // x20
  __int64 v52; // x0
  int32_t v53; // [xsp+0h] [xbp-60h] BYREF
  int32_t v54; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v55; // [xsp+8h] [xbp-58h] BYREF
  int v56; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v57; // [xsp+18h] [xbp-48h] BYREF
  int32_t v58; // [xsp+1Ch] [xbp-44h] BYREF

  v58 = weapongroup;
  v57 = effectFolder;
  if ( (byte_593780B & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6146/*"Effect/weapon/"*/);
    sub_21FFC50(&StringLiteral_6152/*"Effect/weapon/{0}/{1}/usm/battle_{2}_mov{3}.usm"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_6149/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/);
    sub_21FFC50(&StringLiteral_5130/*"D3"*/);
    byte_593780B = 1;
  }
  v56 = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v7 = System_Int32__ToString((int32_t)&v58, 0);
  if ( !effectFolder )
  {
    v9 = System_String__Concat_75438412((System_String_o *)StringLiteral_6146/*"Effect/weapon/"*/, v7, 0);
    if ( Instance )
    {
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v9, dlOnly, 0, v45);
      while ( 1 )
      {
        v55 = v58;
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v55);
        v54 = v58;
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v54);
        v48 = (Il2CppObject *)System_Int32__ToString_76925352((int32_t)&v56, (System_String_o *)StringLiteral_5130/*"D3"*/, 0);
        v51 = System_String__Format_75484644((System_String_o *)StringLiteral_6149/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v46, v47, v48, 0);
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v49, v50);
        if ( !ServantAssetLoadManager__SetNeedDownloadList(v51, dlOnly, v50) )
          break;
        ++v56;
      }
      return;
    }
LABEL_23:
    sub_21FFECC(v9, v10);
  }
  v8 = System_Int32__ToString((int32_t)&v57, 0);
  v9 = System_String__Concat_75483552(
         (System_String_o *)StringLiteral_6146/*"Effect/weapon/"*/,
         v7,
         (System_String_o *)StringLiteral_1123/*"/"*/,
         v8,
         0);
  if ( !Instance )
    goto LABEL_23;
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v9, dlOnly, 0, v11);
  v12 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
  v55 = v58;
  v9 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &v55);
  if ( !v12 )
    goto LABEL_23;
  v19 = (Il2CppObject *)v9;
  while ( 1 )
  {
    if ( v19 )
    {
      v9 = (System_String_o *)sub_21FFDA4(v19, v12->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( !LODWORD(v12->max_length) )
      goto LABEL_31;
    v12->m_Items[0] = v19;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v12->m_Items, (int32_t)v19, v13, v14, v15, v16, v17, v18);
    v54 = v57;
    v9 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &v54);
    v27 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_21FFDA4(v9, v12->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( (v12->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_31;
    v12->m_Items[1] = v27;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->m_Items[1], (int32_t)v27, v21, v22, v23, v24, v25, v26);
    v53 = v58;
    v9 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &v53);
    v34 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_21FFDA4(v9, v12->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( LODWORD(v12->max_length) <= 2 )
      goto LABEL_31;
    v12->m_Items[2] = v34;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->m_Items[2], (int32_t)v34, v28, v29, v30, v31, v32, v33);
    v9 = System_Int32__ToString_76925352((int32_t)&v56, (System_String_o *)StringLiteral_5130/*"D3"*/, 0);
    v41 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_21FFDA4(v9, v12->obj.klass->_1.element_class);
      if ( !v9 )
      {
LABEL_32:
        v52 = sub_21FFEF0(v9, v20);
        sub_21FFD90(v52, 0);
      }
    }
    if ( (v12->max_length & 0xFFFFFFFC) == 0 )
LABEL_31:
      sub_21FFED4(v9);
    v12->m_Items[3] = v41;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->m_Items[3], (int32_t)v41, v35, v36, v37, v38, v39, v40);
    v44 = System_String__Format_75484712((System_String_o *)StringLiteral_6152/*"Effect/weapon/{0}/{1}/usm/battle_{2}_mov{3}.usm"*/, v12, 0);
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v42, v43);
    if ( !ServantAssetLoadManager__SetNeedDownloadList(v44, dlOnly, v43) )
      break;
    ++v56;
    v12 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
    v55 = v58;
    v9 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &v55);
    v19 = (Il2CppObject *)v9;
    if ( !v12 )
      goto LABEL_23;
  }
}


void ServantAssetLoadManager__releaseNoblePhantasm(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  AssetData_o *nobleAssetData; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  AssetData_o *nobleSequenceData; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *nobleEffectList; // x0
  System_String_array *v27; // x0
  const MethodInfo *v28; // x2
  struct System_Collections_Generic_List_string__o *v29; // x8
  int32_t size; // w2
  int v31; // w9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5937831 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_5937831 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0);
    this->fields.nobleAssetData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.nobleAssetData, 0, v4, v5, v6, v7, v8, v9);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0);
    this->fields.nobleSequenceData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.nobleSequenceData, 0, v11, v12, v13, v14, v15, v16);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)bgAssetDataList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v32.fields._current )
        sub_21FFECC(0, v18);
      AssetData__RemoveEntry((AssetData_o *)v32.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v19;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bgAssetDataList,
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
                                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v27, v28);
  v29 = this->fields.nobleEffectList;
  if ( !v29 )
LABEL_20:
    sub_21FFECC(nobleEffectList, method);
  size = v29->fields._size;
  v31 = v29->fields._version + 1;
  v29->fields._size = 0;
  v29->fields._version = v31;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v29->fields._items, 0, size, 0);
}


bool ServantAssetLoadManager__setColorMatrix(
        UnityEngine_GameObject_o *targetRoot,
        UnityEngine_Matrix4x4_o *colorMatrix,
        float matrixBlend,
        const MethodInfo *method)
{
  intptr_t v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *Component_object; // x21
  __int64 v12; // x2
  bool v13; // w8
  UnityEngine_Object_o *m_CachedPtr; // x22
  bool v15; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x21
  __int128 v20; // q1
  __int128 v21; // q2
  UnityEngine_Matrix4x4_o v22; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_59377FF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleCharaColorMatrixComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59377FF = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, colorMatrix, method);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetRoot, 0, 0);
  if ( (v7 & 1) != 0 )
    return 0;
  if ( !targetRoot )
    goto LABEL_21;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               targetRoot,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v13 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  v7 = (intptr_t)targetRoot;
  if ( v13 )
  {
    if ( !Component_object )
      goto LABEL_21;
    m_CachedPtr = (UnityEngine_Object_o *)Component_object[1].fields.m_CachedPtr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
    v15 = UnityEngine_Object__op_Inequality(m_CachedPtr, 0, 0);
    v7 = (intptr_t)targetRoot;
    if ( v15 )
    {
      v7 = Component_object[1].fields.m_CachedPtr;
      if ( !v7 )
        goto LABEL_21;
    }
  }
  v18 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v7,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaColorMatrixComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0, 0);
  if ( (v7 & 1) != 0 )
    return 0;
  if ( !v18 )
LABEL_21:
    sub_21FFECC(v7, v8);
  v20 = *(_OWORD *)&colorMatrix->fields.m01;
  *(_OWORD *)&v22.fields.m00 = *(_OWORD *)&colorMatrix->fields.m00;
  *(_OWORD *)&v22.fields.m01 = v20;
  v21 = *(_OWORD *)&colorMatrix->fields.m03;
  *(_OWORD *)&v22.fields.m02 = *(_OWORD *)&colorMatrix->fields.m02;
  *(_OWORD *)&v22.fields.m03 = v21;
  BattleCharaColorMatrixComponent__SetColorMatrix(
    (BattleCharaColorMatrixComponent_o *)v18,
    &v22,
    matrixBlend,
    targetRoot,
    0);
  return 1;
}


bool ServantAssetLoadManager__setColorMatrixBlend(
        UnityEngine_GameObject_o *targetRoot,
        float matrixBlend,
        const MethodInfo *method)
{
  __int64 v3; // x2
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *monitor; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x19

  if ( (byte_5937800 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleCharaColorMatrixComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937800 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetRoot, 0, 0);
  if ( v6 )
    return 0;
  if ( !targetRoot )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       targetRoot,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      goto LABEL_21;
    monitor = (UnityEngine_Object_o *)Component_object[2].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v11);
    v6 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
    if ( v6 )
    {
      targetRoot = (UnityEngine_GameObject_o *)Component_object[2].monitor;
      if ( !targetRoot )
        goto LABEL_21;
    }
  }
  v15 = UnityEngine_GameObject__GetComponent_object_(
          targetRoot,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaColorMatrixComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0, 0);
  if ( v6 )
    return 0;
  if ( !v15 )
LABEL_21:
    sub_21FFECC(v6, v7);
  BattleCharaColorMatrixComponent__SetMatrixBlend((BattleCharaColorMatrixComponent_o *)v15, matrixBlend, 0);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        bool skipExceptionIfNoAssetFound,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *downloadlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x8
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2

  if ( (byte_59377D2 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_endloadList__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377D2 = 1;
  }
  if ( dlOnly )
  {
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
    if ( !downloadlist )
      goto LABEL_31;
    items = downloadlist->fields._items;
    v13 = Method_System_Collections_Generic_List_string__Add__;
    ++downloadlist->fields._version;
    if ( !items )
      goto LABEL_31;
    size = downloadlist->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        downloadlist,
        (Il2CppObject *)path,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      downloadlist->fields._size = size + 1;
      v15[4] = (Il2CppClass *)path;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v15 + 4),
        (int32_t)path,
        (System_String_o *)dlOnly,
        (System_String_o *)skipExceptionIfNoAssetFound,
        (int32_t)method,
        v5,
        v6,
        v7);
    }
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v26, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27, v28);
    if ( !AssetManager__downloadAssetStorage(path, v26, 20, 0) )
    {
      downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
      if ( downloadlist )
      {
        System_Collections_Generic_List_object___Remove(
          downloadlist,
          (Il2CppObject *)path,
          (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_28:
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v29, v30);
        ServantAssetLoadManager__ShowAssetNotFoundError(path, 0, v30);
        return;
      }
LABEL_31:
      sub_21FFECC(downloadlist, path);
    }
  }
  else
  {
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadedList;
    if ( !downloadlist )
      goto LABEL_31;
    v16 = downloadlist->fields._items;
    v17 = Method_System_Collections_Generic_List_string__Add__;
    ++downloadlist->fields._version;
    if ( !v16 )
      goto LABEL_31;
    v18 = downloadlist->fields._size;
    if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        downloadlist,
        (Il2CppObject *)path,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &v16->obj.klass + v18;
      downloadlist->fields._size = v18 + 1;
      v19[4] = (Il2CppClass *)path;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v19 + 4),
        (int32_t)path,
        (System_String_o *)dlOnly,
        (System_String_o *)skipExceptionIfNoAssetFound,
        (int32_t)method,
        v5,
        v6,
        v7);
    }
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadlist;
    if ( !downloadlist )
      goto LABEL_31;
    v31 = downloadlist->fields._items;
    v32 = Method_System_Collections_Generic_List_string__Add__;
    ++downloadlist->fields._version;
    if ( !v31 )
      goto LABEL_31;
    v33 = downloadlist->fields._size;
    if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        downloadlist,
        (Il2CppObject *)path,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &v31->obj.klass + v33;
      downloadlist->fields._size = v33 + 1;
      v34[4] = (Il2CppClass *)path;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)path, v20, v21, v22, v23, v24, v25);
    }
    v35 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v35, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36, v37);
    if ( !AssetManager__loadAssetStorage_47472160(path, 20, v35, 0) )
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


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__tryLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_59377D4 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_59377D4 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path, dlOnly);
  if ( AssetManager__isExistAssetStorage(path, 0) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, 0, v7);
}


void ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_593781E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593781E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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
  __int64 v8; // x2
  AssetData_o *AssetStorage; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = weapongroup;
  if ( (byte_593781F & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    sub_21FFC50(&StringLiteral_13271/*"Servants/Motion/"*/);
    byte_593781F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  loadedList = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_13271/*"Servants/Motion/"*/, v4, 0);
  if ( !this->fields.loadedList )
    goto LABEL_10;
  v7 = loadedList;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          loadedList,
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = (Il2CppObject *)this->fields.loadedList;
  if ( !loadedList )
LABEL_10:
    sub_21FFECC(loadedList, v6);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    v7,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v8);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v7, 0);
  AssetManager__releaseAsset_47465556(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_5937834 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937834 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  ServantAssetLoadManager__unloadAssetsLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937835 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_5937835 = 1;
  }
  loadedList = this->fields.loadedList;
  memset(&v13, 0, sizeof(v13));
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)loadedList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v13.fields._current;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0);
    if ( AssetStorage )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
      AssetManager__releaseAsset_47465556(AssetStorage, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v10 = this->fields.loadedList;
  if ( !v10 )
LABEL_16:
    sub_21FFECC(loadedList, method);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
}


void ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_59377F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_21FFECC(Instance, v4);
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
  __int64 v12; // x2
  AssetData_o *AssetStorage; // x0

  if ( (byte_59377F4 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377F4 = 1;
  }
  if ( appearanceId < 1 )
    appearanceId = svtId;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
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
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_11;
  ActorFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !ActorFolderName )
LABEL_14:
    sub_21FFECC(ActorFolderName, v10);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)ActorFolderName,
    v11,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_11:
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v12);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0);
  AssetManager__releaseAsset_47465556(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_593783A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593783A = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v4);
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

  if ( (byte_593783B & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_593783B = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId, method);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v6);
}


void ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_59377C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
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
  __int64 v9; // x2
  AssetData_o *AssetStorage; // x0

  if ( (byte_59377C3 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377C3 = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
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
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  CommandCardLoadFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !CommandCardLoadFolderName )
LABEL_12:
    sub_21FFECC(CommandCardLoadFolderName, v7);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)CommandCardLoadFolderName,
    v8,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v9);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v8, 0);
  AssetManager__releaseAsset_47465556(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_59377E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
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
  unsigned int i; // w22
  char *v7; // x23
  CommandSpellEntity_o *v8; // x0
  void **v9; // x23
  CommandSpellEntity_o *v10; // t1
  SoundManager_o *v11; // x20

  if ( (byte_59377E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_59377E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___getEntitys(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     (const MethodInfo_3EDC704 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__)) == 0 )
  {
LABEL_21:
    sub_21FFECC(Instance, v3);
  }
  v4 = *((_DWORD *)Instance + 6);
  v5 = Instance;
  if ( v4 >= 1 )
  {
    for ( i = 0; (int)i < v4; ++i )
    {
      if ( i >= v4 )
LABEL_20:
        sub_21FFED4(Instance);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
  __int64 v10; // x2
  Il2CppObject *Instance; // x22
  System_String_o *NameEffectPath; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int32_t StatusUiType; // w0
  int32_t v16; // w19
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x20
  const MethodInfo *v20; // x2

  if ( (byte_5937848 & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937848 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0);
    if ( EnemyNameEffect )
    {
      v8 = EnemyNameEffect;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9, v10);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v8, v9);
      if ( !Instance )
        goto LABEL_17;
      ServantAssetLoadManager__unloadTargetPathAssetLocal((ServantAssetLoadManager_o *)Instance, NameEffectPath, v14);
    }
    if ( originalDeckSvt )
    {
      if ( !isShiftOrTransform )
      {
        StatusUiType = BattleDeckServantData__GetStatusUiType(originalDeckSvt, 0);
        if ( StatusUiType >= 1 )
        {
          v16 = StatusUiType;
          v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v17, v18);
          NameEffectPath = ServantAssetLoadManager__GetStatusUiPath(v16, v17);
          if ( v19 )
          {
            ServantAssetLoadManager__unloadTargetPathAssetLocal((ServantAssetLoadManager_o *)v19, NameEffectPath, v20);
            return;
          }
LABEL_17:
          sub_21FFECC(NameEffectPath, v13);
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

  if ( (byte_59377DB & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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

  if ( (byte_59377DF & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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

  if ( (byte_59377E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13274/*"Servants_"*/);
    byte_59377E0 = 1;
  }
  v15 = 0;
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v10 = overwriteSvtVoiceId;
  else
    v10 = VoiceId;
  v15 = v10;
  if ( v10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v12 = System_Int32__ToString((int32_t)&v15, 0);
    v13 = System_String__Concat_75438412((System_String_o *)StringLiteral_13274/*"Servants_"*/, v12, 0);
    if ( !Instance )
      sub_21FFECC(v13, v14);
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
    sub_21FFECC(this, 0);
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

  if ( (byte_59377E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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

  if ( (byte_59377E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_59377E4 = 1;
  }
  if ( skillInfo
    && ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
         skillInfo,
         skillInfo->klass->vtable._5_get_skillId.method,
         method)
    && skillInfo->fields.skilllv )
  {
    v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
      v6 = sub_2237AF8(v5);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
    if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
      v7 = sub_2237AF8(v5);
    VoiceAssetName = **(DataManager_o ***)(v7 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          VoiceAssetName,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = (DataManager_o *)SkillLvEntity__getVoiceAssetName(v11, 0);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)VoiceAssetName, 0);
          return;
        }
LABEL_17:
        sub_21FFECC(VoiceAssetName, v4);
      }
    }
  }
}


void ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_593781A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593781A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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

  if ( (byte_59377CA & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59377CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  ServantAssetLoadManager__unloadStatusFacelocal((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v7);
}


void ServantAssetLoadManager__unloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppObject *StatusImageFolderName; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  AssetData_o *AssetStorage; // x0

  if ( (byte_59377CB & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_59377CB = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7, v8);
  StatusImageFolderName = (Il2CppObject *)ServantAssetLoadManager__getStatusImageFolderName(svtId, v7, v8);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v11 = StatusImageFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          StatusImageFolderName,
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  StatusImageFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !StatusImageFolderName )
LABEL_12:
    sub_21FFECC(StatusImageFolderName, v10);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)StatusImageFolderName,
    v11,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v12);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0);
  AssetManager__releaseAsset_47465556(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  __int64 v6; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  AssetData_o *v10; // x19

  if ( (byte_5937816 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    byte_5937816 = 1;
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_14;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)path,
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_14:
    sub_21FFECC(loadedList, path);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)path,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path, v6);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
  {
    v10 = AssetStorage;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8, v9);
    AssetManager__releaseAsset_47465556(v10, 0);
  }
}


void ServantAssetLoadManager__unloadTargetPathAssets(System_String_array *pathList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5937815 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5937815 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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
    sub_21FFECC(this, 0);
  max_length = pathList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_21FFED4(this);
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

  if ( (byte_593780F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593780F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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
  __int64 v11; // x2
  AssetData_o *AssetStorage; // x0
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = weapongroup;
  v13 = effectFolder;
  if ( (byte_5937810 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    sub_21FFC50(&StringLiteral_6146/*"Effect/weapon/"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5937810 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v14, 0);
  v8 = System_String__Concat_75438412((System_String_o *)StringLiteral_6146/*"Effect/weapon/"*/, v6, 0);
  if ( effectFolder )
  {
    v9 = System_Int32__ToString((int32_t)&v13, 0);
    v8 = System_String__Concat_75481624(v8, (System_String_o *)StringLiteral_1123/*"/"*/, v9, 0);
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_12;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)v8,
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_12:
    sub_21FFECC(loadedList, v7);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)v8,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v11);
  AssetStorage = AssetManager__getAssetStorage(v8, 0);
  AssetManager__releaseAsset_47465556(AssetStorage, 0);
}


void ServantAssetLoadManager__GetAheadBg_d__163___ctor(
        ServantAssetLoadManager__GetAheadBg_d__163_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantAssetLoadManager__GetAheadBg_d__163__MoveNext(
        ServantAssetLoadManager__GetAheadBg_d__163_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantAssetLoadManager__GetAheadBg_d__163_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_object__o *v12; // x22
  ServantAssetLoadManager__GetAheadBg_d__163_o **p_bgAheadList_5__2; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct WellFired_USFGOChangeBgEvent_array *v26; // x22
  int max_length; // w8
  unsigned int v28; // w24
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 _2__current_low; // x10
  __int64 v32; // x8
  __int64 v33; // x1
  System_String_o *BgAssetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Collections_Generic_List_USFGOChangeBgEvent__o *bgAheadList_5__2; // x8
  _DWORD *monitor; // x9
  struct System_Action_o *callback; // x8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v42; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_593785D & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager__GetAheadBg_b__163_0__);
    this = (ServantAssetLoadManager__GetAheadBg_d__163_o *)sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_593785D = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = (Il2CppObject *)v8->fields.__4__this;
  memset(&v51, 0, sizeof(v51));
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
    v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v8->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v12;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__163_o **)&v8->fields._bgAheadList_5__2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._bgAheadList_5__2,
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
          sub_21FFED4(this);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v32 + 32) = method;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)method, v20, v21, v22, v23, v24, v25);
          }
        }
        max_length = v26->max_length;
        if ( (int)++v28 >= max_length )
          goto LABEL_18;
      }
LABEL_35:
      sub_21FFECC(this, method);
    }
LABEL_18:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_35;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v51 = v50;
    v50.fields._list = 0;
    *(_QWORD *)&v50.fields._index = &v51;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v51.fields._current )
        sub_21FFECC(0, v33);
      BgAssetPath = WellFired_USFGOChangeBgEvent__GetBgAssetPath(
                      (WellFired_USFGOChangeBgEvent_o *)v51.fields._current,
                      0);
      v35 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v35, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__163_0__, 0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36, v37);
      AssetManager__loadAssetStorage(BgAssetPath, v35, 1, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
  }
  this = (ServantAssetLoadManager__GetAheadBg_d__163_o *)&v8->fields._bgAheadList_5__2;
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
    goto LABEL_32;
  }
  v42 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v42, 0);
  v8->fields.__2__current = (Il2CppObject *)v42;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_21FFBF4(p__2__current, (int32_t)v42, v44, v45, v46, v47, v48, v49);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *ServantAssetLoadManager__GetAheadBg_d__163__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__GetAheadBg_d__163_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantAssetLoadManager__GetAheadBg_d__163__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__GetAheadBg_d__163_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ServantAssetLoadManager__GetAheadBg_d__163_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ServantAssetLoadManager__GetAheadBg_d__163__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__GetAheadBg_d__163_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantAssetLoadManager__GetAheadBg_d__163__System_IDisposable_Dispose(
        ServantAssetLoadManager__GetAheadBg_d__163_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593785B & 1) == 0 )
  {
    sub_21FFC50(&ServantAssetLoadManager___c_TypeInfo);
    byte_593785B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantAssetLoadManager___c_TypeInfo->static_fields,
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


void ServantAssetLoadManager___c__DisplayClass143_0___ctor(
        ServantAssetLoadManager___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantAssetLoadManager___c__DisplayClass143_0___playBattleVoicelocal_b__0(
        ServantAssetLoadManager___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void ServantAssetLoadManager___c__DisplayClass161_0___ctor(
        ServantAssetLoadManager___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantAssetLoadManager___c__DisplayClass161_0___loadNoblePhantasmCoroutine_b__0(
        ServantAssetLoadManager___c__DisplayClass161_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantAssetLoadManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, data);
  _4__this->fields.nobleSequenceData = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.nobleSequenceData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isNext = 1;
}


void ServantAssetLoadManager___c__DisplayClass161_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass161_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 _4__this; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *AssetObject_object; // x20
  Il2CppObject *v14; // x0
  struct UnityEngine_GameObject_o **p_sequence; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *v23; // x21
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Transform_o *v25; // x21
  const MethodInfo *v26; // x3
  WellFired_USFGOChangeBgEvent_array *v27; // x21
  System_Action_o *_9__2; // x22
  ServantAssetLoadManager_o *v29; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_IEnumerator_o *AheadBg; // x1

  if ( (byte_593785C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_21FFC50(&Method_ServantAssetLoadManager___c__DisplayClass161_0__loadNoblePhantasmCoroutine_b__2__);
    sub_21FFC50(&StringLiteral_4586/*"ChrSequence1"*/);
    byte_593785C = 1;
  }
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  *(_QWORD *)(_4__this + 112) = assetData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(_4__this + 112),
    (int32_t)assetData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         (ServantAssetLoadManager_o *)_4__this,
                         this->fields.sequencePath,
                         (System_String_o *)StringLiteral_4586/*"ChrSequence1"*/,
                         (const MethodInfo_3952574 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  v14 = UnityEngine_Object__Instantiate_object_(
          AssetObject_object,
          (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = (struct UnityEngine_GameObject_o *)v14;
  p_sequence = &this->fields.sequence;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sequence, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  _4__this = (__int64)this->fields.sequence;
  if ( !_4__this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  if ( !this->fields.parent )
    goto LABEL_28;
  v22 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (__int64)UnityEngine_GameObject__get_transform(this->fields.parent, 0);
  if ( !v22 )
    goto LABEL_28;
  UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)_4__this, 0);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v23 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_5931940 )
  {
    _4__this = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v23 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v24 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_5931948 )
  {
    _4__this = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931948 = 1;
  }
  if ( !v24 )
    goto LABEL_28;
  UnityEngine_Transform__set_eulerAngles(v24, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v25 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_5931945 )
  {
    _4__this = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v25 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                        (UnityEngine_GameObject_o *)_4__this,
                        (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  v27 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  _9__2 = this->fields.__9__2;
  v29 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass161_0__loadNoblePhantasmCoroutine_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v30, v31, v32, v33, v34, v35);
  }
  if ( !v29 )
LABEL_28:
    sub_21FFECC(_4__this, assetData);
  AheadBg = ServantAssetLoadManager__GetAheadBg(v29, v27, _9__2, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)v29, AheadBg, 0);
}


void ServantAssetLoadManager___c__DisplayClass161_0___loadNoblePhantasmCoroutine_b__2(
        ServantAssetLoadManager___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNext = 1;
}


void ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161___ctor(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161__MoveNext(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct ServantAssetLoadManager_o *_4__this; // x20
  __int64 Instance; // x0
  MissionNaviTransitionBoardItem_o *v12; // x0
  System_String_o *nobleDataPath_5__2; // x21
  Il2CppObject *v14; // x23
  AssetLoader_LoadEndDataHandler_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *v18; // x8
  struct ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x9
  Il2CppObject *v20; // x22
  struct ServantAssetLoadManager___c__DisplayClass161_0_o **p__8__1; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct ServantAssetLoadManager_o *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct UnityEngine_GameObject_o *parent; // x1
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *v42; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *v45; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x0
  struct System_String_o *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  __int64 v61; // x2
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *v62; // x8
  System_String_o *sequencePath; // x22
  __int64 v64; // x1
  __int64 v65; // x2
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *v66; // x22
  System_String_o *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_String_o *v74; // x22
  System_String_o *v75; // x0
  struct System_String_o *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *v83; // x21
  System_String_o *v84; // x20
  AssetLoader_LoadEndDataHandler_o *v85; // x22
  __int64 v86; // x1
  __int64 v87; // x2
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *_8__1; // x8
  UnityEngine_Object_o *sequence; // x21
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  System_Collections_Generic_List_int__o *v96; // x21
  __int64 v97; // x2
  System_Int32_array *funcId; // x21
  int v99; // w21
  const MethodInfo *v100; // x2
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *v101; // x8
  int v102; // w8
  __int64 v103; // x21
  __int64 v104; // x22
  const MethodInfo *v105; // x2
  struct ServantAssetLoadManager___c__DisplayClass161_0_o *v106; // x8
  _BOOL4 isNext; // w20
  ServantAssetLoadManager_c *v108; // x0
  Il2CppObject **p__2__current; // x19
  int v110; // w8
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  int v114; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_593785E & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&BattleSequenceManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ServantAssetLoadManager___c__DisplayClass161_0__loadNoblePhantasmCoroutine_b__0__);
    sub_21FFC50(&Method_ServantAssetLoadManager___c__DisplayClass161_0__loadNoblePhantasmCoroutine_b__1__);
    sub_21FFC50(&ServantAssetLoadManager___c__DisplayClass161_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9894/*"NoblePhantasm/"*/);
    sub_21FFC50(&StringLiteral_9896/*"NoblePhantasm/Sequence/"*/);
    byte_593785E = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  Instance = 0;
  v114 = 0;
  entity = 0;
  effectIdList = 0;
  if ( _1__state > 2 )
  {
    if ( _1__state == 3 )
    {
      this->fields.__1__state = -1;
LABEL_40:
      _8__1 = this->fields.__8__1;
      if ( _8__1 )
      {
        if ( !_8__1->fields.isNext )
        {
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
          v110 = 3;
          goto LABEL_80;
        }
        sequence = (UnityEngine_Object_o *)_8__1->fields.sequence;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        if ( !UnityEngine_Object__op_Inequality(sequence, 0, 0) )
          goto LABEL_78;
        v96 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v96,
          (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v96;
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          if ( Instance )
          {
            Instance = TreasureDvcLvMaster__TryGetEntity(
                         (TreasureDvcLvMaster_o *)Instance,
                         &entity,
                         this->fields.treasureDvcId,
                         this->fields.treasureDvcLv,
                         0);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_83;
              funcId = entity->fields.funcId;
              if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method, v97);
              BattleEffectUtility__AddRelatedFunctionEffectIdList(funcId, &effectIdList, 0);
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_83;
              Instance = TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(entity, 0);
              if ( (int)Instance >= 1 )
              {
                v99 = Instance;
                Instance = sub_21FFD10(int___TypeInfo, 1);
                if ( !Instance )
                  goto LABEL_83;
                method = (const MethodInfo *)Instance;
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_84;
                *(_DWORD *)(Instance + 32) = v99;
                if ( !_4__this )
                  goto LABEL_83;
                Instance = (__int64)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                      _4__this,
                                      (System_Int32_array *)Instance,
                                      v100);
              }
            }
            v101 = this->fields.__8__1;
            if ( v101 )
            {
              Instance = (__int64)v101->fields.sequence;
              if ( Instance )
              {
                Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
                if ( Instance )
                {
                  v102 = *(_DWORD *)(Instance + 24);
                  v103 = Instance;
                  if ( v102 >= 1 )
                  {
                    v104 = 0;
                    while ( (unsigned int)v104 < v102 )
                    {
                      Instance = *(_QWORD *)(v103 + 32 + 8 * v104);
                      if ( !Instance )
                        goto LABEL_83;
                      WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                        (WellFired_USFGOActorBattleActionEvent_o *)Instance,
                        &effectIdList,
                        0);
                      v102 = *(_DWORD *)(v103 + 24);
                      if ( (int)++v104 >= v102 )
                        goto LABEL_65;
                    }
LABEL_84:
                    sub_21FFED4(Instance);
                  }
                }
LABEL_65:
                Instance = (__int64)effectIdList;
                if ( effectIdList )
                {
                  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                                        effectIdList,
                                        (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( _4__this )
                  {
                    Instance = (__int64)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                          _4__this,
                                          (System_Int32_array *)Instance,
                                          v105);
                    if ( _4__this->fields.nobleEffectList )
                    {
                      System_Collections_Generic_List_object___AddRange(
                        (System_Collections_Generic_List_object__o *)_4__this->fields.nobleEffectList,
                        (System_Collections_Generic_IEnumerable_T__o *)Instance,
                        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
                      goto LABEL_74;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_83:
      sub_21FFECC(Instance, method);
    }
    if ( _1__state == 4 )
    {
      this->fields.__1__state = -1;
LABEL_74:
      v108 = ServantAssetLoadManager_TypeInfo;
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method, v2);
      if ( ServantAssetLoadManager__checkLoad((const MethodInfo *)v108) )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v90, v91, v92, v93, v94, v95);
        v110 = 4;
LABEL_80:
        *((_DWORD *)p__2__current - 2) = v110;
        LOBYTE(Instance) = 1;
        return Instance;
      }
LABEL_78:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v90, v91, v92, v93, v94, v95);
      v110 = 5;
      goto LABEL_80;
    }
    if ( _1__state != 5 )
      return Instance;
    v18 = this->fields.__8__1;
    this->fields.__1__state = -1;
    if ( !v18 )
      goto LABEL_83;
    callback = this->fields.callback;
    if ( !callback )
      goto LABEL_83;
    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v18->fields.sequence,
      callback->fields.method);
    LOBYTE(Instance) = 0;
  }
  else
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
      {
        if ( _1__state != 2 )
          return Instance;
        Instance = (__int64)this->fields.__8__1;
        this->fields.__1__state = -1;
        if ( !Instance )
          goto LABEL_83;
        *(_QWORD *)(Instance + 32) = 0;
        v12 = (MissionNaviTransitionBoardItem_o *)(Instance + 32);
        LOBYTE(v12[-1].fields._BoardType_k__BackingField) = 0;
        sub_21FFBF4(v12, 0, v2, v3, v4, v5, v6, v7);
        nobleDataPath_5__2 = this->fields._nobleDataPath_5__2;
        v14 = (Il2CppObject *)this->fields.__8__1;
        v15 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v15,
          v14,
          Method_ServantAssetLoadManager___c__DisplayClass161_0__loadNoblePhantasmCoroutine_b__1__,
          0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16, v17);
        Instance = AssetManager__loadAssetStorage(nobleDataPath_5__2, v15, 1, 0, 0);
        goto LABEL_40;
      }
      this->fields.__1__state = -1;
    }
    else
    {
      this->fields.__1__state = -1;
      v20 = (Il2CppObject *)sub_21FFEBC(ServantAssetLoadManager___c__DisplayClass161_0_TypeInfo);
      System_Object___ctor(v20, 0);
      this->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass161_0_o *)v20;
      p__8__1 = &this->fields.__8__1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v20, v22, v23, v24, v25, v26, v27);
      Instance = (__int64)this->fields.__8__1;
      if ( !Instance )
        goto LABEL_83;
      v34 = this->fields.__4__this;
      *(_QWORD *)(Instance + 16) = v34;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Instance + 16), (int32_t)v34, v28, v29, v30, v31, v32, v33);
      Instance = (__int64)this->fields.__8__1;
      if ( !Instance )
        goto LABEL_83;
      parent = this->fields.parent;
      *(_QWORD *)(Instance + 48) = parent;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Instance + 48), (int32_t)parent, v35, v36, v37, v38, v39, v40);
      v42 = this->fields.__8__1;
      if ( !v42 )
        goto LABEL_83;
      v42->fields.isNext = 0;
      if ( !_4__this )
        goto LABEL_83;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, method);
      if ( !*(&BattleSequenceManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, v43, v44);
      Instance = (__int64)BattleSequenceManager__SafeGetExecutingTdInfo(0);
      if ( !Instance )
        goto LABEL_83;
      v45 = *p__8__1;
      v114 = *(_DWORD *)(Instance + 16);
      v46 = System_Int32__ToString((int32_t)&v114, 0);
      Instance = (__int64)System_String__Concat_75438412((System_String_o *)StringLiteral_9896/*"NoblePhantasm/Sequence/"*/, v46, 0);
      if ( !v45 )
        goto LABEL_83;
      v45->fields.sequencePath = (struct System_String_o *)Instance;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->fields.sequencePath, Instance, v47, v48, v49, v50, v51, v52);
      v53 = System_Int32__ToString((int32_t)&v114, 0);
      v54 = System_String__Concat_75438412((System_String_o *)StringLiteral_9894/*"NoblePhantasm/"*/, v53, 0);
      this->fields._nobleDataPath_5__2 = v54;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._nobleDataPath_5__2,
        (int32_t)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      v62 = this->fields.__8__1;
      if ( !v62 )
        goto LABEL_83;
      sequencePath = v62->fields.sequencePath;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v61);
      if ( !AssetManager__isExistAssetStorage(sequencePath, 0) )
      {
        v66 = this->fields.__8__1;
        v67 = System_Int32__ToString((int)this + 48, 0);
        Instance = (__int64)System_String__Concat_75438412((System_String_o *)StringLiteral_9896/*"NoblePhantasm/Sequence/"*/, v67, 0);
        if ( !v66 )
          goto LABEL_83;
        v66->fields.sequencePath = (struct System_String_o *)Instance;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v66->fields.sequencePath,
          Instance,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
      }
      v74 = this->fields._nobleDataPath_5__2;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v64, v65);
      Instance = AssetManager__isExistAssetStorage(v74, 0);
      if ( (Instance & 1) == 0 )
      {
        v75 = System_Int32__ToString((int)this + 48, 0);
        v76 = System_String__Concat_75438412((System_String_o *)StringLiteral_9894/*"NoblePhantasm/"*/, v75, 0);
        this->fields._nobleDataPath_5__2 = v76;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._nobleDataPath_5__2,
          (int32_t)v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82);
      }
      v83 = *p__8__1;
      if ( !v83 )
        goto LABEL_83;
      v84 = v83->fields.sequencePath;
      v83->fields.isNext = 0;
      v85 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v85,
        (Il2CppObject *)v83,
        Method_ServantAssetLoadManager___c__DisplayClass161_0__loadNoblePhantasmCoroutine_b__0__,
        0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v86, v87);
      Instance = AssetManager__loadAssetStorage(v84, v85, 1, 0, 0);
    }
    v106 = this->fields.__8__1;
    if ( !v106 )
      goto LABEL_83;
    isNext = v106->fields.isNext;
    this->fields.__2__current = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    if ( isNext )
    {
      LOBYTE(Instance) = 1;
      this->fields.__1__state = 2;
    }
    else
    {
      LOBYTE(Instance) = 1;
      this->fields.__1__state = 1;
    }
  }
  return Instance;
}


Il2CppObject *ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161__System_IDisposable_Dispose(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__161_o *this,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FF9AE8;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1FF9ACC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)&loc_1FF9A84;
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
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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